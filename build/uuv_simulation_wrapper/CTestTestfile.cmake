# CMake generated Testfile for 
# Source directory: /home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_wrapper
# Build directory: /home/constance/uuv_ws/build/uuv_simulation_wrapper
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_uuv_simulation_wrapper_rostest_test_test_run_task.test "/home/constance/uuv_ws/build/uuv_simulation_wrapper/catkin_generated/env_cached.sh" "/usr/bin/python3" "/opt/ros/noetic/share/catkin/cmake/test/run_tests.py" "/home/constance/uuv_ws/build/uuv_simulation_wrapper/test_results/uuv_simulation_wrapper/rostest-test_test_run_task.xml" "--return-code" "/usr/bin/python3 /opt/ros/noetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_wrapper --package=uuv_simulation_wrapper --results-filename test_test_run_task.xml --results-base-dir \"/home/constance/uuv_ws/build/uuv_simulation_wrapper/test_results\" /home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_wrapper/test/test_run_task.test ")
set_tests_properties(_ctest_uuv_simulation_wrapper_rostest_test_test_run_task.test PROPERTIES  _BACKTRACE_TRIPLES "/opt/ros/noetic/share/catkin/cmake/test/tests.cmake;160;add_test;/opt/ros/noetic/share/rostest/cmake/rostest-extras.cmake;52;catkin_run_tests_target;/home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_wrapper/CMakeLists.txt;30;add_rostest;/home/constance/uuv_ws/src/uuv_simulation_evaluation/uuv_simulation_wrapper/CMakeLists.txt;0;")
subdirs("gtest")
