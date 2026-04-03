# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist # Import the Twist message type


# Step 1: Define a class for the publisher node
class my_publisher(Node):
    def __init__(self):
        # Initialize the node
        super().__init__('node_10_myPub')  # group number: 10
        
        # Step 2: Create a publisher for your topic
        self.publisher_ = self.create_publisher(Twist, 'topic_10', 10)  # <-- Replace 'NICKNAME'
        
        # Step 3: Set a timer to publish messages at a chosen frequency
        timer_period = 3.0
        self.timer = self.create_timer(timer_period, self.timer_callback)
        
        # Step 4: Initialize a counter to keep track of message numbers
        self.i = 0  # Starts counting from 0

    # Step 5: Define the callback function that will be called by the timer
    def timer_callback(self):
        msg = Twist()
        
        # Linear movement (m/s)
        msg.linear.x = 0.5
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        
        # Angular movement (rad/s)
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.1
        
        self.publisher_.publish(msg)
        self.get_logger().info(
            f'Publishing Twist:\n Linear x={msg.linear.x},\n Angular z={msg.angular.z}'
        )

        # Increment the message counter
        self.i += 1

# Step 6: Define the main function to run the node
def main(args=None):
    # Initialize the ROS2 Python client library
    rclpy.init(args=args)
    
    # Create an instance of the MinimalPublisher node
    minimal_publisher = my_publisher()

    try:
        # Run the node until interrupted
        rclpy.spin(minimal_publisher)
    except KeyboardInterrupt:
        # Gracefully handle shutdown when Ctrl+C is pressed
        pass
    finally:
        # Destroy the node and shutdown the ROS2 Python client library
        minimal_publisher.destroy_node()
        rclpy.shutdown()

# Entry point of the script
if __name__ == '__main__':
    main()
