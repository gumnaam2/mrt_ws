import rclpy
from rclpy.node import Node

from custommsgsrv.srv import Hypo

class SrvTest(Node):
    def __init__(self):
        super().__init__("srvtest")
        self.srv = self.create_service(
            srv_type= Hypo, srv_name="gethypo", callback=self.gethypo
        )
    def gethypo(self, req, resp):
        resp.c = (req.a**2 + req.b**2)**0.5
        self.get_logger().info(f"a = {req.a} b = {req.b} c = {resp.c}")
        return resp
    
def main(args = None):
    rclpy.init(args=args)

    srv = SrvTest()

    rclpy.spin(srv)

    rclpy.shutdown()

if __name__ == "__main__":
    main()