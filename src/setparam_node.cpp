#include <ros/ros.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "setparam_node");

    ros::NodeHandle nh;

    nh.setParam("/emcl2_node/initial_pose_x", 7.6);
    nh.setParam("/emcl2_node/initial_pose_y", -0.3);

    ROS_INFO("Parameter 'initial_pose_x' and 'initial_pose_y' set in namespace '/emcl2_node'");

    return 0;
}
