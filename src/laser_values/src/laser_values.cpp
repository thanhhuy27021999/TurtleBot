#include "ros/ros.h"
#include"sensor_msgs/LaserScan.h"
#include "tf/transform_listener.h"
#include <iostream>
#include "geometry_msgs/PoseWithCovarianceStamped.h"
void laser_callback(const sensor_msgs::LaserScan& msg)
{
    printf("The number of data is %d \n", msg.ranges.size());
    printf("Values at 0 degree is %f \n",msg.ranges[0]);
    std::cout << "at 180 is: "<<msg.ranges[179]<<"\n";
    std::cout << "at 360 is: "<<msg.ranges[359]<<"\n";
};
void PoseCallback(const geometry_msgs::PoseWithCovarianceStamped::ConstPtr& msg)
{
    ROS_INFO("The pose is: x= %f y = %f z = %f ",msg->pose.pose.position.x,msg->pose.pose.position.y,
    msg->pose.pose.position.z);
    ROS_INFO("orientation is x=%f y= %f z= %f w=%f ",msg->pose.pose.orientation.x, msg->pose.pose.orientation.y
    ,msg->pose.pose.orientation.z, msg->pose.pose.orientation.w);
};
int main(int argc,char** argv)
{
    ros::init(argc, argv, "laser_value");
    ros::MultiThreadedSpinner spinner(2);
    float* Distance;
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("/scan", 10, laser_callback);
    ros::Subscriber SubPose = n.subscribe("/amcl_pose",10,PoseCallback);
    spinner.spin();
    return 0;
}