# Import the ROS2 Python client library
import rclpy
from rclpy.node import Node
from first_interfaces.msg import ExampleMessage

# Step 1: Define a class for the subscriber node
class my_subscriber(Node):
    def __init__(self):
        
        super().__init__('node_10_mySub')
        
        # Step 2: Create a subscription to your group's topic
        # The callback function 'listener_callback' will be called whenever a message is received
        self.subscription = self.create_subscription(
            ExampleMessage,             # Message type used by the pubsub node
            'topic2_10',
            self.listener_callback,  
            10                          # Queue size for incoming messages
        )
        self.subscription  # Prevent unused variable warning

    # Step 3: Define the callback function that will be called when a message is received
    def listener_callback(self, msg):
        # Access the data using the same sub-variable names
        self.get_logger().info(f'Listening: my_float={msg.my_float}, my_float_array={msg.my_float_array}, my_string={msg.my_string}')

# Step 4: Define the main function to run the node
def main(args=None):
    # Initialize the ROS2 Python client library
    rclpy.init(args=args)
    
    # Create an instance of the MinimalSubscriber node
    minimal_subscriber = my_subscriber()

    try:
        # Run the node until interrupted
        rclpy.spin(minimal_subscriber)
    except KeyboardInterrupt:
        # Gracefully handle shutdown when Ctrl+C is pressed
        pass
    finally:
        # Destroy the node and shutdown the ROS2 Python client library
        minimal_subscriber.destroy_node()
        rclpy.shutdown()

# Entry point of the script
if __name__ == '__main__':
    main()
