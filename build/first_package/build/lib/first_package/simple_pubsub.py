# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from std_msgs.msg import String  # Import the String message type

# If the publisher uses Int data type, use:
# from std_msgs.msg import Int

# Step 1: Define a class for the subscriber node
# Replace 'Node_ID' with a unique name for your group’s node (e.g., 'node_1' if you’re Group 1)
class MinimalPubSubNode(Node):
    def __init__(self):
        # Initialize the node with the custom name 'node_NICKNAME'
        super().__init__('node_10_pubsub')  # <-- Replace 'NICKNAME' with your actual group number
        
        # Publisher part
        self.publisher_ = self.create_publisher(String, 'topic_1010', 10)
        self.timer = self.create_timer(3.0, self.timer_callback)
        self.i = 0

        # Subscriber part (Listening to the same topic or a different one)
        self.subscription = self.create_subscription(
            String,
            'topic_10', 
            self.listener_callback,
            10)

    def timer_callback(self):
        msg = String()
        msg.data = f"Group 10 pubsub says hello! Message #{self.i}"
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')
        self.i += 1

    def listener_callback(self, msg):
        self.get_logger().info(f'I heard: "{msg.data}"')

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
