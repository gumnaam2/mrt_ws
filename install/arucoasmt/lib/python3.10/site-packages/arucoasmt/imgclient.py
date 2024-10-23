import rclpy # Python library for ROS 2
from rclpy.node import Node # Handles the creation of nodes
from cv_bridge import CvBridge # Package to convert between ROS and OpenCV Images
import cv2 # OpenCV library
from custommsgsrv.srv import Imgservice
import sys

class imgClient(Node):
    def __init__(self):
        super().__init__('imgClient')
        self.cli = self.create_client(
            srv_name="imageprocessor",
            srv_type=Imgservice
        )

        while not self.cli.wait_for_service(timeout_sec=0.75):
            self.get_logger().info("Waiting")
        self.req = Imgservice.Request()


        # Used to convert between ROS and OpenCV images
        self.br = CvBridge()

    def send_req(self):
        self.address = str(sys.argv[1]) #video address
        
        video_capture = cv2.VideoCapture(self.address)
        success, frame = video_capture.read()
        
        while success:
            self.ros2img = self.br.cv2_to_imgmsg(frame)
            self.req.img = self.ros2img
            self.future = self.cli.call_async(self.req)

            while rclpy.ok():
                rclpy.spin_once(self)
                if self.future.done():
                    try:
                        resp = self.future.result()
                    except Exception as e:
                        self.get_logger().info("Failed to retrieve response", e)
                    else:
                        self.get_logger().info(f"{len(resp.ids)} IDs found: {resp.ids}")
                        for i, corner in enumerate(resp.corners):
                            self.get_logger().info(f"Bounds for ArUco ID {resp.ids[i]}: ")
                            for pt in corner.points:
                                self.get_logger().info(f"({pt.x}, {pt.y})")
                    finally:
                        break
             
            success, frame = video_capture.read()  # Read next frame

def main(args=None):
    rclpy.init(args=args)

    asyncClient = imgClient()
    asyncClient.send_req()

    asyncClient.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
  main()