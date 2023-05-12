# BUG LOG

## 2023/5/12

### colcon build出现警告：

`WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub' in the environment variable AMENT_PREFIX_PATH doesn't exist`

结局方法：

更改 AMENT_PREFIX_PATH,CMAKE_PREFIX_PATH

```bash
zyh@cache:~/ros2_study/foxy/foxy_ws$ colcon build
[0.390s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub' in the environment variable AMENT_PREFIX_PATH doesn't exist
Starting >>> py_pub_sub
Finished <<< py_pub_sub [1.15s]          

Summary: 1 package finished [1.33s]
zyh@cache:~/ros2_study/foxy/foxy_ws$ colcon build
[0.382s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub_sub' in the environment variable AMENT_PREFIX_PATH doesn't exist
[0.382s] WARNING:colcon.colcon_ros.prefix_path.ament:The path '/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub' in the environment variable AMENT_PREFIX_PATH doesn't exist
Starting >>> py_pub_sub
Finished <<< py_pub_sub [1.12s]          

Summary: 1 package finished [1.31s]
zyh@cache:~/ros2_study/fox
zyh@cache:~/ros2_study/fox
zyh@cache:~/ros2_study/foxy/foxy_ws$ printenv AMENT_PREFIX_PATH CMAKE_PREFIX_PATH
/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub_sub:/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub:/opt/ros/foxy
zyh@cache:~/ros2_study/foxy/foxy_ws$ export AMENT_PREFIX_PATH=xxx
zyh@cache:~/ros2_study/foxy/foxy_ws$ export CMAKE_PREFIX_PATH=xxx
zyh@cache:~/ros2_study/foxy/foxy_ws$ colcon build
[0.393s] WARNING:colcon.colcon_ros.prefix_path.ament:The path 'xxx' in the environment variable AMENT_PREFIX_PATH doesn't exist
[0.393s] WARNING:colcon.colcon_ros.prefix_path.catkin:The path 'xxx' in the environment variable CMAKE_PREFIX_PATH doesn't exist
Starting >>> py_pub_sub
Finished <<< py_pub_sub [1.08s]          

Summary: 1 package finished [1.21s]
zyh@cache:~/ros2_study/foxy/foxy_ws$ printenv AMENT_PREFIX_PATH CMAKE_PREFIX_PATH
xxx
xxx
zyh@cache:~/ros2_study/foxy/foxy_ws$ export AMENT_PREFIX_PATH=/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub_sub
zyh@cache:~/ros2_study/foxy/foxy_ws$ export CMAKE_PREFIX_PATH=/home/zyh/ros2_study/foxy/foxy_ws/install/py_pub_sub
zyh@cache:~/ros2_study/foxy/foxy_ws$ colcon build
Starting >>> py_pub_sub
Finished <<< py_pub_sub [1.09s]          

Summary: 1 package finished [1.21s]
```

