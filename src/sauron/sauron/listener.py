import rclpy
from std_msgs.msg import String

check = False

def listener_callback(msg, currmsg):
    global check
    if currmsg == 1:
        print(msg.data, end = '  ')
        check = True
    elif (currmsg == 2 and check == True):
        print(msg.data)
        check = False

def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('Listener')

    subscription1 = node.create_subscription(String, 'listen_1', lambda msg: listener_callback(msg, 1), 10)
    subscription2 = node.create_subscription(String, 'listen_2', lambda msg: listener_callback(msg, 2), 10)

    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()

        rclpy.shutdown()

if __name__ == '__main__':
    main()