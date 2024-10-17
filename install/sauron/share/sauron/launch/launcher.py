from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription(
        [
            Node(
                package="sauron",
                executable="talker1",
            ),
            Node(
                package= "sauron",
                executable= "talker2",
            ),
            Node(
                package= "sauron",
                executable= "listener",
            )
        ]
    )