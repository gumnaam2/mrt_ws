from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="sauron",
                executable="pubtest",
            ),
            Node(
                package= "sauron",
                executable= "subtest",
            ),
        ]
    )