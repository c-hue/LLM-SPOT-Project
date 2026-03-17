#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from spot_schemas_interfaces.srv import Walk
from geometry_msgs.msg import Twist
import time


class WalkingSchemaNode(Node):

    def __init__(self):
        super().__init__('walking_schema')

        # Create service
        self.srv = self.create_service(
            Walk,
            '/schemas/walking',
            self.walk_callback
        )

        # Publisher to control SPOT in Webots
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.get_logger().info('Walking Schema Service Ready')

    def walk_callback(self, request, response):
        """Execute forward movement by specified distance (meters)"""

        distance = request.distance_meters
        self.get_logger().info(f'Walking forward {distance} meters')

        # Validate input
        if distance <= 0:
            response.status.success = False
            response.status.message = "Distance must be positive"
            self.get_logger().warn(response.status.message)
            return response

        if distance > 10.0:
            response.status.success = False
            response.status.message = "Distance exceeds safety limit (10m)"
            self.get_logger().warn(response.status.message)
            return response

        # Movement parameters
        speed = 0.3  # meters per second
        duration = distance / speed

        twist = Twist()
        twist.linear.x = speed

        # Execute walking
        start_time = time.time()
        while (time.time() - start_time) < duration:
            self.cmd_vel_pub.publish(twist)
            time.sleep(0.05)

        # Stop movement
        twist.linear.x = 0.0
        self.cmd_vel_pub.publish(twist)

        response.status.success = True
        response.status.message = f'Walked {distance} meters'
        self.get_logger().info(response.status.message)

        return response


def main(args=None):
    rclpy.init(args=args)
    node = WalkingSchemaNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()