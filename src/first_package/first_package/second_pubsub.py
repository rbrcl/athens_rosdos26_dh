# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist # Import the Twist message type

# If the publisher uses Int data type, use:
# from std_msgs.msg import Int

# Step 1: Define a class for the subscriber node
# Replace 'Node_ID' with a unique name for your group’s node (e.g., 'node_1' if you’re Group 1)
class MinimalPubSubNode(Node):
    def __init__(self):
        # Initialize the node with the custom name 'node_NICKNAME'
        super().__init__('node_10_pubsub')  # <-- Replace 'NICKNAME' with your actual group number
        
        # Publisher part
        self.publisher_ = self.create_publisher(Twist, 'topic_1010', 10)
        self.timer = self.create_timer(3.0, self.timer_callback)
        self.i = 0

        # Subscriber part (Listening to the same topic or a different one)
        self.subscription = self.create_subscription(
            Twist,
            'topic_10', 
            self.listener_callback,
            10)

    def timer_callback(self):
        msg = Twist()
        
        # Linear movement (m/s)
        msg.linear.x = 0.5  # Move forward at 0.5 meters per second
        msg.linear.y = 0.0
        msg.linear.z = 0.0
        
        # Angular movement (rad/s)
        msg.angular.x = 0.0
        msg.angular.y = 0.0
        msg.angular.z = 0.1  # Rotate slowly
        
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing Twist: Linear x={msg.linear.x}, Angular z={msg.angular.z}')
        
        self.i += 1

    def listener_callback(self, msg):
        # Access the data using the same sub-variable names
        self.get_logger().info(f'I heard: Linear x is {msg.linear.x}')

# Step 4: Define the main function to run the node
def main(args=None):
    rclpy.init(args=args)
    minimal_pubsub = MinimalPubSubNode()
    try:
        rclpy.spin(minimal_pubsub) # This now spins BOTH the pub and sub logic
    except KeyboardInterrupt:
        pass
    finally:
        minimal_pubsub.destroy_node()
        rclpy.shutdown()


# Entry point of the script
if __name__ == '__main__':
    main()
