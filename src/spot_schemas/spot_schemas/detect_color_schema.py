#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from spot_schemas_interfaces.srv import DetectObjectColor
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np

class DetectColorSchemaNode(Node):
    def __init__(self):
        super().__init__('detect_color_schema')
        
        # Service
        self.srv = self.create_service(
            DetectObjectColor,
            '/schemas/detect_object_color',
            self.detect_callback
        )
        
        # Subscribe to SPOT's front camera
        self.image_sub = self.create_subscription(
            Image,
            '/Spot/kinect_color/image_color',
            self.image_callback,
            10
        )
        
        self.bridge = CvBridge()
        self.latest_image = None
        
        self.get_logger().info('DetectObjectColor Schema Service Ready')

    def image_callback(self, msg):
        """Store latest camera image"""
        try:
            self.latest_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
        except Exception as e:
            self.get_logger().error(f'Image conversion failed: {e}')

    def detect_callback(self, request, response):
        """Detect colored object in camera view"""
        self.get_logger().info(f'🔍 Detecting {request.target_color} object')
        
        if self.latest_image is None:
            response.status.success = False
            response.status.message = 'No camera image available'
            self.get_logger().warn(response.status.message)
            return response
        
        # HSV color ranges for detection
        color_ranges = {
            'red': ((0, 100, 100), (10, 255, 255)),
            'blue': ((100, 100, 100), (130, 255, 255)),
            'green': ((40, 100, 100), (80, 255, 255)),
            'yellow': ((20, 100, 100), (30, 255, 255)),
        }
        
        if request.target_color.lower() not in color_ranges:
            response.status.success = False
            response.status.message = f'Unknown color: {request.target_color}'
            self.get_logger().warn(response.status.message)
            return response
        
        # Convert to HSV
        hsv = cv2.cvtColor(self.latest_image, cv2.COLOR_BGR2HSV)
        
        # Get color range and create mask
        lower, upper = color_ranges[request.target_color.lower()]
        mask = cv2.inRange(hsv, np.array(lower), np.array(upper))
        
        # Find contours
        contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        if len(contours) == 0:
            response.status.success = False
            response.status.message = f'No {request.target_color} object found'
            self.get_logger().warn(response.status.message)
            return response
        
        # Get largest contour
        largest_contour = max(contours, key=cv2.contourArea)
        x, y, w, h = cv2.boundingRect(largest_contour)
        
        # Calculate confidence based on contour area
        area = cv2.contourArea(largest_contour)
        image_area = self.latest_image.shape[0] * self.latest_image.shape[1]
        confidence = min(area / image_area * 10, 1.0)  # Normalize
        
        # Fill response
        response.detected_object.object_id = f'{request.target_color}_object'
        response.detected_object.color = request.target_color
        response.detected_object.x = int(x + w/2)
        response.detected_object.y = int(y + h/2)
        response.detected_object.width = w
        response.detected_object.height = h
        response.detected_object.confidence = float(confidence)
        
        response.status.success = True
        response.status.message = f'Detected {request.target_color} object at ({response.detected_object.x}, {response.detected_object.y})'
        
        self.get_logger().info(response.status.message)
        return response

def main(args=None):
    rclpy.init(args=args)
    node = DetectColorSchemaNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
