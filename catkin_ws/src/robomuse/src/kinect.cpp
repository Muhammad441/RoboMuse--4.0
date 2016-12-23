#include <ros/ros.h>
#include <sensor_msgs/LaserScan.h>
#include<fstream>
#include<iostream>
std::ofstream myfile;
float global_min = 100;
void laserCallBack(const sensor_msgs::LaserScan &msg)
{
	int numScan = 1 + (msg.angle_max - msg.angle_min)/msg.angle_increment;
	float min = 100;
	for(int i=0;i<numScan;i++)
	{
	if(!isnan(msg.ranges[i]))
		{		
			if(msg.ranges[i] < min)
				min = msg.ranges[i];
		}
	}	
	if(min<global_min) global_min =	min;
	myfile.open("kinect");
	myfile<<global_min<<"\n";
	myfile.close();
	
}

int main(int argc, char **argv)
{
	ros::init(argc,argv,"laser_minima");
	ros::NodeHandle n;
	ros::Subscriber laser_sub = n.subscribe("/scan",1000,laserCallBack);
	ros::spin();
}
