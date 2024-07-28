# trafficlight-project
Traffic Information Acquisition System

Overview
The Traffic Information Acquisition System is designed to improve safety and efficiency in traffic management. Utilizing Arduino microcontrollers, ultrasonic sensors, relay modules, and LED lights, this system provides effective traffic control at street intersections and curved paths where visibility is limited.

Components
Arduino Microcontroller
Ultrasonic Sensors or LIDAR
Relay Module
LED Lights for Traffic Indication
Objectives
Vehicle Detection: Detect various types of vehicles at street intersections and curves.
Traffic Signal Control: Use red and green LED lights to indicate traffic signals based on vehicle detection.
System Design
This system detects obstacles and controls traffic lights using the following cases:

Case 1: When the obstacle does not interrupt the sensor signal or is more than 200cm away, the Green light is switched ON.
Case 2: When the obstacle interrupts the sensor signal or is less than 200cm away, the Red light is switched ON.
Installation
Clone the Repository

bash
Copy code
git clone [https://github.com/Gopi-04/trafficlight-project/new/main?readme=1]
Components Setup

Connect the ultrasonic sensors to the Arduino.
Wire the relay module to control the LED lights.
Configure the LED lights for traffic indication.
Upload the Code

Open the Arduino IDE.
Load the provided .ino file.
Upload the code to the Arduino microcontroller.
Usage
Power On the System
Ensure the Arduino and sensors are correctly powered.

System Operation

The system will detect the obstacles and switch between green and red lights based on the defined cases.

If any obstacle is detected in the setup range, the LED will light red colour, if no object is detected, it will light red colour as usual.

Results
This system aims to enhance traffic control and management, contributing to road safety and reducing traffic congestion.

Contributing
If you would like to contribute to this project, please fork the repository and submit a pull request with your changes. For major changes, please open an issue first to discuss what you would like to change.

License
This project is licensed under the MIT License - see the LICENSE file for details.

If Obstacle is Detected:




If no Obstacle is Detected:




Acknowledgments
Arduino community for the microcontroller and support.
Various online resources for tutorials and troubleshooting.
