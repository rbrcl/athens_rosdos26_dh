from setuptools import find_packages, setup
import os # Import the os module to handle paths
from glob import glob # Import the glob module to include files using patterns

package_name = 'stm_station'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),

    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        #(os.path.join('share', package_name, 'launch')),
        #glob('launch/*.py')), # Add all Python launch files from the launch/ directory
        (os.path.join('share', package_name, 'config'),
        glob(os.path.join('config', '*.yaml'))),
    ],

    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='athens',
    maintainer_email='athens@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'stm_pub_node = stm_station.stm_serial_node_pub:main',
            'stm_pub_sub_node = stm_station.stm_serial_node_pub_sub:main',
            'stm_control_node = stm_station.stm_control_node_master_slave',
            'stm_visualization_node = stm_station.stm_visualization',
        ],
    },
)