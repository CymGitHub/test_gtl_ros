cmake_minimum_required(VERSION 3.1.0)
project(test_gtl_ros_conflict)

set(CMAKE_CXX_STANDARD 14)  # 将 C++ 标准设置为 C++ 14
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # C++ 14 是强制要求，不会衰退至低版本


## Find catkin
find_package(catkin REQUIRED COMPONENTS
  roscpp
  message_generation
  rospy
  std_msgs
  geometry_msgs
  sensor_msgs
  hardware_interface
  controller_manager
  controller_interface
  urdf
  iiwa_tools
  realtime_tools)

find_package(PkgConfig)


##Needed for ros packages
catkin_package(
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs hardware_interface controller_interface controller_manager urdf iiwa_tools realtime_tools message_runtime
#  LIBRARIES CustomEffortController
)

include_directories(
  include
 ${catkin_INCLUDE_DIRS}
)


add_executable(code_test src/code_test.cpp)
target_include_directories(code_test PUBLIC include ${catkin_INCLUDE_DIRS})
target_link_libraries(code_test ${catkin_LIBRARIES})
add_dependencies(code_test ${catkin_EXPORTED_TARGETS})


#add_executable(code_test src/code_test.cpp)
#target_include_directories(code_test PUBLIC include)
##target_link_libraries(code_test )
##add_dependencies(code_test )



#install(TARGETS vfc_cone_tool
#  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
#)
install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

install(DIRECTORY config
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

