#include "ros/ros.h" 
#include "live_demo/my_msg.h" 
#include "std_msgs/String.h" 

void mypubCallback(const live_demo::my_msg::ConstPtr& msg) 
{ 
	ROS_INFO("sub echoing pub: %d",msg->my_counter); 
}

int main (int argc, char **argv) 
{ 
	// command line ROS arguments/ name remapping 
	ros::init(argc, argv, "name_of_mysub_node"); 

	// ROS comms access point 
	ros::NodeHandle my_handle; 

	// tell master you want to sub to topic 
	ros::Subscriber mysub_object = my_handle.subscribe("mypub_topic",100,mypubCallback); 

	// act on callbacks 
	ros::spin();

	return 0; 
}
