#include <ros / ros . h>

int  main ( int  argc ,  char  ∗∗ argv )  {
    ros : : i n i t ( argc ,  argv ,  " hello_ros " );
    ros : : NodeHandle nh;
    ROS_INFO_STREAM( " Hello , ␣ROS! " );
    }