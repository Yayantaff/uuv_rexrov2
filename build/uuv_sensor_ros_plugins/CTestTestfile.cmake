# CMake generated Testfile for 
# Source directory: /home/constance/uuv_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins
# Build directory: /home/constance/uuv_ws/build/uuv_sensor_ros_plugins
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_uuv_sensor_ros_plugins_rostest_test_test_urdf_files.test "/home/constance/uuv_ws/build/uuv_sensor_ros_plugins/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/constance/uuv_ws/build/uuv_sensor_ros_plugins/test_results/uuv_sensor_ros_plugins/rostest-test_test_urdf_files.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/constance/uuv_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins --package=uuv_sensor_ros_plugins --results-filename test_test_urdf_files.xml --results-base-dir \"/home/constance/uuv_ws/build/uuv_sensor_ros_plugins/test_results\" /home/constance/uuv_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins/test/test_urdf_files.test ")
set_tests_properties(_ctest_uuv_sensor_ros_plugins_rostest_test_test_urdf_files.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/constance/uuv_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins/CMakeLists.txt;260;add_rostest;/home/constance/uuv_ws/src/uuv_simulator/uuv_sensor_plugins/uuv_sensor_ros_plugins/CMakeLists.txt;0;")
subdirs("gtest")
