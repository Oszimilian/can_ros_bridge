
import rospy
import socket
#import vcan0_pb2 as pb
import vcan0_pb2

from std_msgs.msg import String
import py_test.msg as can_msgs

def talk_to_me():


    pub_t = rospy.Publisher("py_test_test_topic", getattr(can_msgs, "test"), queue_size=100)
    rospy.init_node("publisher_py_test", anonymous=True)
    rate = rospy.Rate(1)
    rospy.loginfo("Started py_test_node")
    
    while not rospy.is_shutdown():
        m = getattr(can_msgs, "test")
        tm = m()

        setattr(tm, "num", 5)
        setattr(tm, "name", "hallo")
        pub_t.publish(tm)

        rate.sleep()

class UdpServer:
    def __init__(self, port, ip, buffer):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.sock.bind((ip, port))

    def start(self):
        try:
            while True:
                data, addr = self.sock.recvfrom(1024)
                print(f"{data} \n")
        except KeyboardInterrupt:
            print("Stopped Server")
        finally:
            self.sock.close()

if __name__ == "__main__":
    try:
        #talk_to_me()
        server = UdpServer(9871, "localhost", 1024)
        server.start()

    except rospy.ROSInternalException:
        pass