# CMake generated Testfile for 
# Source directory: /home/constance/uuv_ws/src/uuv_simulator/uuv_control/uuv_trajectory_control
# Build directory: /home/constance/uuv_ws/build/uuv_trajectory_control
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_uuv_trajectory_control_rostest_test_test_python_api.test "/home/constance/uuv_ws/build/uuv_trajectory_control/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/constance/uuv_ws/build/uuv_trajectory_control/test_results/uuv_trajectory_control/rostest-test_test_python_api.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/constance/uuv_ws/src/uuv_simulator/uuv_control/uuv_trajectory_control --package=uuv_trajectory_control --results-filename test_test_python_api.xml --results-base-dir \"/home/constance/uuv_ws/build/uuv_trajectory_control/test_results\" /home/constance/uuv_ws/src/uuv_simulator/uuv_control/uuv_trajectory_control/test/test_python_api.test ")
set_tests_properties(_ctest_uuv_trajectory_control_rostest_test_test_python_api.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/constance/uuv_ws/src/uuv_simulator/uuv_control/uuv_trajectory_control/CMakeLists.txt;37;add_rostest;/home/constance/uuv_ws/src/uuv_simulator/uuv_control/uuv_trajectory_control/CMakeLists.txt;0;")
subdirs("gtest")
