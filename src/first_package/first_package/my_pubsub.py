# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist # Import the Twist message type
from first_interfaces.msg import ExampleMessage

# Step 1: Define a class
class my_minimal_pubsub(Node):
    def __init__(self):
        # Initialize the node
        super().__init__('node_10_myPubsub')
        
        # Subscriber part (Listening to the topic from my_publisher_node)
        self.subscription = self.create_subscription(
            Twist,
            'topic_10', 
            self.listener_callback,
            10
        )

        # Publisher part
        self.publisher_ = self.create_publisher(
            ExampleMessage,
            'topic2_10',
            10
        )
        self.timer = self.create_timer(3.0, self.timer_callback)
        self.i = 0

    def listener_callback(self, msg):
        # Access the data using the same sub-variable names
        self.get_logger().info(
            f'Listening: linear=[{msg.linear.x},{msg.linear.y},{msg.linear.x}], angular=[{msg.angular.x},{msg.angular.x},{msg.angular.x}]'
        )

    def timer_callback(self):
        msg = ExampleMessage()
        
        msg.my_float = 0.1
        msg.my_float_array = [0.0,1.0]
        msg.my_string = 'ahoj'
        
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing ExampleMessage: my_string={msg.my_string}')
        
        self.i += 1

# Step 4: Define the main function to run the node
def main(args=None):
    rclpy.init(args=args)
    my_pubsub = my_minimal_pubsub()
    try:
        rclpy.spin(my_pubsub) # This now spins BOTH the pub and sub logic
    except KeyboardInterrupt:
        pass
    finally:
        my_pubsub.destroy_node()
        rclpy.shutdown()

# Entry point of the script
if __name__ == '__main__':
    main()
