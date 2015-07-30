#include "ros/ros.h" 
#include "live_demo/my_msg.h"
#include "std_msgs/String.h" 

int main (int argc, char **argv) 
{ 
	// command line ROS arguments/ name remapping 
	ros::init(argc, argv, "name_of_mypub_node"); 

	// ROS comms access point 
	ros::NodeHandle my_handle; 

	// master registry pub/sub 
	ros::Publisher mypub_object = 	my_handle.advertise<live_demo::my_msg>("mypub_topic",100); 

	// loop 10 Hz 
	ros::Rate loop_rate(10); 

	int counter = 0;

	while (ros::ok()) 
	{ 
		loop_rate.sleep(); 

		// refer to advertise msg type 
		live_demo::my_msg mypub_msg; 
		mypub_msg.my_counter = counter++;  

		mypub_object.publish(mypub_msg); 
	} 

	return 0; 
}
