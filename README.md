AGV_Localization
================

Odometry, IMU and Robot Localization Packages
1. Odometry: * Encoder data is published by the topic "encoderData"
             * The odometry-publisher subscribes to this raw data and publishes in the proper format under the topic 
               name "odometry"
             * The ros_filter.h file subscribes to the odometry data (along with data from other sources and processes
               it.
             * The ekf_localisation_node calls RosFilter<ekf>::run() (typedefed as rosEkf). The run function publishes
               odometry/filtered which will be subscribed by navsat_transform
               
            
