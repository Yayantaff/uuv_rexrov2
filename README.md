# uuv_rexrov2

Robot Descriptions Generic Format :

<ROBOT_NAME>_description
|-- launch
    |-- upload.launch
|-- meshes
    |-- README.md
|-- robots
    |-- default.xacro
|-- urdf
    |-- actuators.xacro
    |-- base.xacro
    |-- gazebo.xacro
    |-- sensors.xacro
    |-- snippets.xacro
`-- CMakeLists.txt
`-- package.xml

This is the ROS workspace for simulating a UUV model RexROV2 for demontration purposes.
Location : src/RexROV2/RexROV2_description

This model has dependencies on uuv_simulator base model for interpolation of waypoints, control and trajectory planning, sensor_plugins etc. functionalities and library dependencies.

Launching :

roslaunch rexrov2_gazebo start_demo_pid_controller.launch

(PID control)

roslaunch uuv_control_utils send_waypoints_file.launch uuv_name:=rexrov2 interpolator:=lipb



