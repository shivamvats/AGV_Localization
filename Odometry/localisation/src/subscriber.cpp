#include <nav_msgs/Odometry.h>
#include <ros/ros.h>


void Callback(const nav_msgs::Odometry::ConstPtr& msg){

   // ROS_INFO("Heard: &s", msg->data.c.str());

}

int main(int argc, int **argv){
    ros::init(argc, argv, "localisation_sub");
    ros::NodeHandle nh;
    ros::Subscriber sub = nh.subscribe("odometry", 10, Callback);
    ros::spin();
    return 0;
}
