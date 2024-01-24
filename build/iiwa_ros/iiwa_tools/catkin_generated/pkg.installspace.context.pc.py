# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/local/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/local/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;message_runtime;std_msgs;sensor_msgs;geometry_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-liiwa_tools;-lmc_rbdyn_urdf;-ltinyxml2;-lRBDyn".split(';') if "-liiwa_tools;-lmc_rbdyn_urdf;-ltinyxml2;-lRBDyn" != "" else []
PROJECT_NAME = "iiwa_tools"
PROJECT_SPACE_DIR = "/home/cym/test/install"
PROJECT_VERSION = "0.0.1"
