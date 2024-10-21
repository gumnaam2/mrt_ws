import rclpy, sys
from rclpy.node import Node

from custommsgsrv.srv import Hypo

class CliTestAsync(Node):
    def __init__(self):
        super().__init__("clitest")
        self.cli = self.create_client(
            srv_type= Hypo,
            srv_name= "gethypo",
        )
        while not self.cli.wait_for_service(timeout_sec= 0.75):
            self.get_logger().info("Waiting")
        self.req = Hypo.Request()

    def send_req(self):
        self.req.a = float(sys.argv[1])
        self.req.b = float(sys.argv[2])

        self.future = self.cli.call_async(self.req)

def main(args = None):
    rclpy.init(args=args)

    asyncClient = CliTestAsync()
    asyncClient.send_req()

    while rclpy.ok():
        rclpy.spin_once(asyncClient)
        if asyncClient.future.done():
            try:
                resp = asyncClient.future.result()
            except Exception as e:
                asyncClient.get_logger().info("Failed to retrieve response", e)
            else:
                asyncClient.get_logger().info(f"Hypotenuse of rt ang tri w/ a = {asyncClient.req.a}, b = {asyncClient.req.b} is {resp.c}")
            finally:
                break
    
    asyncClient.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()


