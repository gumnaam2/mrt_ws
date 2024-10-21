import rclpy # Python library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from sensor_msgs.msg import Image # Image is the message type
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
from custommsgsrv.srv import Dimensions
import sys

class imgClient(Node):
  def __init__(self):
    """
    Class constructor to set up the node
    """
    super().__init__('imgClient')
    self.cli = self.create_client(
      srv_name="image_dims",
      srv_type=Dimensions
    )

    while not self.cli.wait_for_service(timeout_sec=0.75):
      self.get_logger().info("Waiting")
    self.req = Dimensions.Request()


    # Used to convert between ROS and OpenCV images
    self.br = CvBridge()

    def send_req(self):
      self.address = str(sys.argv[1])
      img = cv2.imread(self.address)
      self.ros2img = self.br.cv2_to_imgmsg(img)

      self.req.img = self.ros2img

def main(args=None):
    rclpy.init(args=args)

    asyncClient = imgClient()
    asyncClient.send_req()

    while rclpy.ok():
        rclpy.spin_once(asyncClient)
        if asyncClient.future.done():
            try:
                resp = asyncClient.future.result()
            except Exception as e:
                asyncClient.get_logger().info("Failed to retrieve response", e)
            else:
                asyncClient.get_logger().info(f"Dimensions of image: ({resp.a}, {resp.b}, {resp.c})")
            finally:
                break
    
    asyncClient.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
  main()