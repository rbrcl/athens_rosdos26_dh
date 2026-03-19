from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory
 
 
def generate_launch_description():
    share_dir = get_package_share_directory('stm_station')
 
    serial_params = os.path.join(
        share_dir,
        'config',
    )
 
    return LaunchDescription([
        Node(
            package='stm_station',
            executable='d8_stm_serial_node_custom_interfaces',
            name='stm_serial_node',
            parameters=[serial_params],
            output='screen',
        )
    ])