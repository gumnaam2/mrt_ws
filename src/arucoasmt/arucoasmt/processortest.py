import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Polygon, Point32
from cv_bridge import CvBridge 
import cv2
import cv2.aruco as aruco
from custommsgsrv.srv import Imgservice
import sys

class imageProcessor(Node):
    def __init__(self):
        super().__init__('imgsrv')
        self.imgsrv = self.create_service(
            srv_type= Imgservice,
            srv_name= 'image_dims',
            callback=self.getdims
        )
        self.br = CvBridge()
        self.aruco_dict = aruco.getPredefinedDictionary(aruco.DICT_6X6_250)
        self.Parameters = aruco.DetectorParameters()
        self.arucodetector = aruco.ArucoDetector(self.aruco_dict, self.Parameters)

    def getdims(self, req, resp):
        self.cv2img = self.br.imgmsg_to_cv2(img_msg=req.img, desired_encoding='passthrough')
        self.get_logger().info("Received service request")
        #resp.a, resp.b, resp.c = self.cv2img.shape
        self.gray = cv2.cvtColor(self.cv2img, cv2.COLOR_BGR2GRAY)

        corners, ids, _ = self.arucodetector.detectMarkers(self.gray)
        
        ids = [int(id[0]) for id in ids]


        #print(corners)
        #print(ids)
        
        polygons = []

        for arr in corners:
            polygon = Polygon()
            A = arr[0]
            for corner in A:
                print(corner, corner[0], corner[1])
                pt = Point32()
                pt.x, pt.y = float(corner[0]), float(corner[1])
                polygon.points.append(pt)
            polygons.append(polygon)
        resp.ids = ids
        resp.corners = polygons
        print(polygons)
        self.get_logger().info("Served data successfully")
        return resp


def main(args = None):
    rclpy.init(args=args)

    srv = imageProcessor()

    rclpy.spin(srv)

    rclpy.shutdown()

if __name__ == "__main__":
    main()