# 🤖 Rover Robotic Arm

A Wi-Fi controlled **Rover Robotic Arm** built using **ESP32**, **DC Motors**, **Servo Motors**, and **3D Printed Components**.  
This project integrates a **4-wheeled mobile rover** with a **multi-degree-of-freedom robotic arm** capable of object handling, pick-place, industrial automation and real-time wireless control through a web-based interface.

---

## 📸 Project Preview

### Rover Platform
![Rover Chassis](https://github.com/user-attachments/assets/9799831d-5c76-44c4-a7d0-c9ca8ce7ff69)

### Robotic Arm
![Robotic Arm](https://github.com/user-attachments/assets/1446d608-4acd-4659-96ce-3fcc408a753d)

### Gripper Mechanism
![Gripper](https://github.com/user-attachments/assets/db9683c0-9bc1-4678-a4e5-097a8749b8b4)

### Complete System
![Complete System](https://github.com/user-attachments/assets/25e927b6-3199-4462-b503-12b005528525)

### Circuit Diagram
![Circuit Diagram](https://github.com/user-attachments/assets/2c9d6595-7d86-4f13-b2b6-8305163c7b81)

> ⚠️ Note: The circuit diagram is for reference. Always verify GPIO pins from the latest code before implementation.

---

## 🌐 Web Controller Dashboard

The ESP32 hosts a web server that allows real-time control from any browser.

![Web Controller](https://github.com/user-attachments/assets/c8b19799-70c7-402a-948f-3d4119d21914)

---

## 🎥 Demonstration

🔗 https://youtu.be/ZPAJIUnQEEs

---

## 📖 Overview

The Rover Robotic Arm combines a mobile rover with a robotic arm. The rover can move in different directions, and the arm is used to pick and place objects.

The ESP32 acts as the main controller, managing both movement and arm operations. The system works over Wi-Fi and is controlled through a web interface.

Overall, the project is designed for simple and efficient movement and object handling.

---

## 🚀 Key Features

- 🚗 4-Wheel Rover Movement
- 🤖 Multi-DOF Robotic Arm
- 🌐 ESP32 Web Server Control
- 📶 Wi-Fi Communication (No App Required)
- ✋ Pick-and-Place Capability
- 🖨️ 3D Printed Structure
- 🔋 Battery Powered System
- 📏 Obstacle Detection (Ultrasonic Sensor)
- 📱 Mobile-Friendly Interface

---

## 🏗️ System Architecture

User Device  
↓  
Web Browser  
↓  
ESP32 Web Server  
↓  
Motor Driver → DC Motors (Rover Movement)  
↓  
Servo Motors (Robotic Arm)

---

## ⚙️ Working Principle

### 🚗 Rover Movement
The ESP32 sends signals to the L298N motor driver to control movement:

- Forward  
- Backward  
- Left  
- Right  
- Stop  

---

### 🤖 Robotic Arm
Servo motors control:

- Base Rotation  
- Shoulder movement
- Elbow movement
- Wrist movement
- Gripper movement

---

## 🌐 Web Interface

### Features
- Movement Control  
- Arm Control  
- Gripper Control  
- Real-Time Feedback  
- No external app required  

---

## 🛠️ Hardware Components

| Component | Quantity |
|----------|----------|
| ESP32 DevKit V1 | 1 |
| DC Gear Motors | 4 |
| L298N Motor Driver | 1 |
| Servo Motors (MG996R / MG90S) | Multiple |
| HC-SR04 Ultrasonic Sensor | 1 |
| LM2596 Buck Converter | 1 |
| Li-ion Battery Pack | 1 |
| Rover Chassis | 1 |
| Wheels | 4 |
| 3D Printed Parts | Multiple |
| Jumper Wires | Multiple |

---

## 💻 Software Used
- Arduino IDE  
- Embedded C/C++  
- ESP32 Board Package  
- Required Libraries  

---

## 🔥 Technical Highlights
- ESP32
- PWM-Based Servo Control  
- Efficient Power Management  
- Real-Time Wireless Control  
- Expandable for AI & IoT  

---

## 🎮 Controls

| Command | Function |
|--------|----------|
| Forward | Move Rover Forward |
| Backward | Move Rover Backward |
| Left | Turn Left |
| Right | Turn Right |
| Stop | Stop Rover |
| Arm Up | Lift Arm |
| Arm Down | Lower Arm |
| Grip Open | Open Gripper |
| Grip Close | Close Gripper |

---

## 📌 Applications
- Pick-and-Place  
- Object Handling  
- Robotics Learning  
- Embedded Systems  
- Industrial Automation  

---

## 🔮 Future Improvements
- AI Object Detection  
- Autonomous Navigation
- ESP32-Camera Integration  
- Computer Vision  
- Voice Control  
- GPS Tracking  
- IoT Cloud Monitoring  

---

## 👨‍💻 Team

**Diploma in Electronics Engineering Batch 2023-2026**  
**Ambedkar DSEU Shakarpur Campus-I**

- Thakur Prasad Sharma  
- Vikas Kumar  
- Vishal Jangid  
- Sudhir  

---

## 🙏 Acknowledgements
- Prof. Shyam Bambiwal  
- Prof. Sourabh Maurya (3D Printing Support)  
- Ambedkar DSEU Shakarpur Campus-I  

---

⭐ If you found this project helpful, please consider giving it a star!
