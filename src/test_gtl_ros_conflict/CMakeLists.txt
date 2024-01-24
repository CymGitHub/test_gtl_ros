cmake_minimum_required(VERSION 3.1.0)
project(test_gtl_ros_conflict)

set(CMAKE_CXX_STANDARD 17)  # 将 C++ 标准设置为 C++ 14
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # C++ 14 是强制要求，不会衰退至低版本


cmake_policy(SET CMP0057 NEW)
add_compile_options(-fPIC)

option(ENABLE_SIMD "Build with all SIMD instructions on the current local machine" ON)

# Tell CMake where to find "Find<LIB>.cmake"
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

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

#set(KUKA_FRI_INLUDE_DIRS /usr/local/include/kuka/fri)
#set(KUKA_FRI_LIBRARIES /usr/local/lib)

#find_package(FRI REQUIRED COMPONENTS
#    kuka_fri
#)

## Find control_stack
#find_package(RobotControllers REQUIRED COMPONENTS
#  RobotControllers
#)

find_package(PkgConfig)
## Find Eigen
pkg_search_module(Eigen3 REQUIRED eigen3)


set(PINOCCHIO_INLUDE_DIRS /usr/local/include/pinocchio)


##Needed for ros packages
catkin_package(
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs hardware_interface controller_interface controller_manager urdf iiwa_tools realtime_tools message_runtime
#  LIBRARIES CustomEffortController
)

include_directories(
  include
 ${catkin_INCLUDE_DIRS}
)

#add_library(iiwa_ikfast SHARED src/iiwa/iiwa_ikfast.cpp)

#add_library(iiwa_fri_driver STATIC src/iiwa/iiwa_fri_driver.cpp)
#target_include_directories(iiwa_fri_driver PUBLIC include ${catkin_INCLUDE_DIRS} ${FRI_INCLUDE_DIRS})
#target_link_libraries(iiwa_fri_driver ${catkin_LIBRARIES} ${FRI_LIBRARIES})
#add_dependencies(iiwa_fri_driver ${catkin_EXPORTED_TARGETS} iiwa_driver_generate_messages_cpp)


#add_library(iiwa_fri_bringup STATIC src/iiwa/iiwa_fri_driver.cpp src/iiwa/iiwa_fri_bringup.cpp)
#target_include_directories(iiwa_fri_bringup PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS} ${FRI_INCLUDE_DIRS})
#target_link_libraries(iiwa_fri_bringup ${catkin_LIBRARIES} pinocchio iiwa_ikfast ${FRI_LIBRARIES})
#add_dependencies(iiwa_fri_bringup ${catkin_EXPORTED_TARGETS})

#add_library(distance_nasal_liner_tool STATIC src/vfc_geometric_tools/distance_nasal_liner_tool.cpp)
#target_include_directories(distance_nasal_liner_tool PUBLIC include)
#target_link_libraries(distance_nasal_liner_tool)



#add_executable(screw_imp_test src/screw_imp/screw_imp_test.cpp)
#target_include_directories(screw_imp_test PUBLIC include ${catkin_INCLUDE_DIRS} ${QPOASES_INLUDE_DIRS}  ${CASADI_INLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(screw_imp_test ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(screw_imp_test ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_free_drag src/screw_imp/iiwa_free_drag.cpp)
#target_include_directories(iiwa_free_drag PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_free_drag ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_free_drag ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_joint_imp src/screw_imp/iiwa_joint_imp.cpp)
#target_include_directories(iiwa_joint_imp PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_joint_imp ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_joint_imp ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_cart_orth_imp src/screw_imp/iiwa_cart_orth_imp.cpp)
#target_include_directories(iiwa_cart_orth_imp PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_cart_orth_imp ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_cart_orth_imp ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_screw_imp src/screw_imp/iiwa_screw_imp.cpp)
#target_include_directories(iiwa_screw_imp PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_screw_imp ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_screw_imp ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_screw_assembly src/screw_imp/iiwa_screw_assembly.cpp)
#target_include_directories(iiwa_screw_assembly PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_screw_assembly ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_screw_assembly ${catkin_EXPORTED_TARGETS})

#add_executable(iiwa_gear_assembly src/screw_imp/iiwa_gear_assembly.cpp)
#target_include_directories(iiwa_gear_assembly PUBLIC include ${catkin_INCLUDE_DIRS} ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(iiwa_gear_assembly ${catkin_LIBRARIES} pinocchio iiwa_ikfast iiwa_fri_bringup)
#add_dependencies(iiwa_gear_assembly ${catkin_EXPORTED_TARGETS})


add_executable(code_test2 src/code_test.cpp)
target_include_directories(code_test2 PUBLIC include ${catkin_INCLUDE_DIRS})
target_link_libraries(code_test2 ${catkin_LIBRARIES})
add_dependencies(code_test2 ${catkin_EXPORTED_TARGETS})


#add_executable(code_test src/code_test.cpp)
#target_include_directories(code_test PUBLIC include)
##target_link_libraries(code_test )
##add_dependencies(code_test )

#add_executable(test_distance_line_circle src/test_distance_line_circle.cpp)
#target_include_directories(test_distance_line_circle PUBLIC include ${PINOCCHIO_INLUDE_DIRS})
#target_link_libraries(test_distance_line_circle pinocchio iiwa_ikfast)
##add_dependencies(test_distance_line_circle)

#install(TARGETS vfc_cone_tool
#  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
#)
install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

install(DIRECTORY config
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

