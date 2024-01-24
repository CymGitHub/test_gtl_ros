
1.Clone the project to the local computer

$ git clone https://github.com/CymGitHub/test_gtl_ros.git

2.Build the project, must be the Release version

$ cd test_gtl_ros/
$ catkin_make -DCMAKE_BUILD_TYPE=Release

3.Open a new terminal and start roscore

$ roscore

4 Run ros node code_test

$ cd devel/

$ source setup.bash

$ rosrun test_gtl_ros_conflict code_test


My output:
direction  
0.707107  0.707107  0  
LCOutput.lineClosest  
-3.51583e+16  -3.51583e+16  0  
LCOutput.circleClosest  
9  2  0  
LCOutput.distance:  4.97213e+16

The output of the program becomes correct after any of the following changes.

1.Re-build from step 2, but with the following command, unrestrict the Release version,

$ catkin_make

2.Delete the src/iiwa_ros folder, build and devel folders and rebuild from step 2

3.Open the src/test_gtl_ros/CMakeLiist.txt file, comment lines 38-41, uncomment lines 44-47, and rebuild from step 2
