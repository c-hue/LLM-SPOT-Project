#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from spot_schemas_interfaces.srv import Rotate
from geometry_msgs.msg import Twist
import math
import time

class RotateSchemaNode(Node):
    def __init__(self):
        super().__init__('rotate_schema')

        # Create service
        self.srv = self.create_service(
            Rotate,
            '/schemas/rotate',
            self.rotate_callback
        )

        # Publisher to control SPOT in Webots
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.get_logger().info('Rotate Schema Service Ready')

    def rotate_callback(self, request, response):
        """Execute rotation by specified angle in degrees"""
        angle_deg = request.angle_degrees
        angle_rad = math.radians(angle_deg)

        self.get_logger().info(f'Rotating by {angle_deg}° ({angle_rad:.2f} rad)')

        # Validate input
        if abs(angle_deg) > 360:
            response.status.success = False
            response.status.message = f'Angle {angle_deg}° exceeds limit (±360°)'
            self.get_logger().warn(response.status.message)
            return response

        # Execute rotation
        twist = Twist()
        rotation_speed = 0.68  # rad/s

        # Set rotation direction
        if angle_rad < 0:
            twist.angular.z = -rotation_speed
        else:
            twist.angular.z = rotation_speed

        # Calculate duration
        duration = abs(angle_rad) / rotation_speed

        # Execute rotation
        start_time = time.time()
        while (time.time() - start_time) < duration:
            self.cmd_vel_pub.publish(twist)
            time.sleep(0.05)

        # Stop rotation
        twist.angular.z = 0.0
        self.cmd_vel_pub.publish(twist)
        # Return success
        response.status.success = True
        response.status.message = f'Rotated {angle_deg}°'
        self.get_logger().info(response.status.message)

        return response

def main(args=None):
    rclpy.init(args=args)
    node = RotateSchemaNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
