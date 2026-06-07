# 🤖 Rover-Robotic Arm

A Wi-Fi controlled **Rover Robotic Arm** built using **ESP32 microcontoller**, **DC Motors**, **Servo Motors**, **3D Printed Components** and **other mentioned components**.The project combines a mobile robotic 4 wheeled rover with a multi-degree-of-freedom robotic arm capable of object handling, industrial purposes, navigation, and real-time remote control through a web-based interface. This project has been developed with the assistance of various academic and online resources, including tutorials and reference materials, which have been carefully studied, analysed, and implemented by us in our own understanding. 

---

## 📸 Project Preview

### Rover Platform

<img width="722" height="532" alt="chasissss" src="https://github.com/user-attachments/assets/9799831d-5c76-44c4-a7d0-c9ca8ce7ff69" />


### Robotic Arm

<img width="1024" height="1536" alt="3D-printed robotic arm on square base" src="https://github.com/user-attachments/assets/1446d608-4acd-4659-96ce-3fcc408a753d" />

### Robotic Arm Gripper

<img width="553" height="466" alt="gripper" src="https://github.com/user-attachments/assets/db9683c0-9bc1-4678-a4e5-097a8749b8b4" />

### Complete System

<img width="1189" height="1323" alt="complete system" src="https://github.com/user-attachments/assets/25e927b6-3199-4462-b503-12b005528525" />

### Circuit Diagram

<img width="1356" height="768" alt="circuit diagram" src="https://github.com/user-attachments/assets/2c9d6595-7d86-4f13-b2b6-8305163c7b81" />


**Note**: This diagram is intended for conceptual system representation. Final wiring, GPIO assignments, and hardware connections should be verified against the latest source code and component specifications before implementation.

---

## 🌐 Web Controller Dashboard

The rover and robotic arm are controlled through a custom web interface hosted directly on the ESP32.

<img width="809" height="1942" alt="web contoller" src="https://github.com/user-attachments/assets/c8b19799-70c7-402a-948f-3d4119d21914" />



---

## 🎥 Demo Video

Watch the project in action:

🔗 **Demo Video:**  
https://youtu.be/ZPAJIUnQEEs-link-here

---

## 📖 Overview

The Rover Robotic Arm is designed to perform tasks in environments where direct human intervention is difficult, unsafe, or inefficient. The system integrates mobility, manipulation, and wireless communication into a single robotic platform.

### Key Features

- 🚗 Rover Movement Control
- 🤖 Multi-DOF Robotic Arm
- 🌐 ESP32 Web-Based Controller
- 📶 Wi-Fi Communication
- ✋ Object Pick-and-Place Capability
- 🖨️ 3D Printed Mechanical Components
- 🔋 Battery Powered Operation
- 📏 Obstacle Detection Support
- 📱 Mobile-Friendly Dashboard
- 🔧 Modular and Expandable Design

---

## 🏗️ System Architecture

```text
User Device
     │
     ▼
 Web Browser
     │
     ▼
ESP32 Web Server
     │
 ┌───┴─────────────┐
 │                 │
 ▼                 ▼
Motor Driver    Servo Motors
 (L298N)       (Robotic Arm)
     │
     ▼
 DC Motors
(Rover Movement)
```

---

## 🌐 Web Interface Controller

The ESP32 hosts a web server that allows users to control the rover directly from any smartphone, tablet, or computer browser.

### Features

- Forward / Backward Movement
- Left / Right Steering
- Arm Joint Control
- Gripper Open / Close
- Real-Time Response
- Mobile Responsive Design
- No External Application Required

### Workflow

```text
User Device
      │
      ▼
ESP32 Wi-Fi Access Point
      │
      ▼
 Web Browser Interface
      │
      ▼
 ESP32 Web Server
      │
      ▼
 Motors & Servo Motors
```

---

## 🛠️ Hardware Components

| Component | Quantity |
|------------|------------|
| ESP32 DevKit V1 | 1 |
| DC Gear Motors | 4 |
| L298N Motor Driver | 1 |
| Servo Motors (MG996R / MG90S) | Multiple |
| HC-SR04 Ultrasonic Sensor | 1 |
| LM2596 Buck Converter | 1 |
| Lithium-Ion Battery Pack | 1 |
| Rover Chassis | 1 |
| Wheels | 4 |
| 3D Printed Arm Parts | Multiple |
| Jumper Wires | Multiple |

---

## 💻 Software Used

- Arduino IDE
- ESP32 Board Package
- Embedded C/C++
- Libraries

---

## ⚙️ Working Principle

### Rover Movement

The ESP32 sends control signals to the L298N motor driver, which controls the DC motors responsible for rover movement.

Supported movements:

- Forward
- Backward
- Left
- Right
- Stop

### Robotic Arm Control

Servo motors provide precise control of:

- Base Rotation
- Shoulder Joint
- Elbow Joint
- Wrist Joint
- Gripper Mechanism

### Wireless Communication

The ESP32 creates its own Wi-Fi network and hosts a web dashboard. Users connect to the network and control the rover through a browser.

---

## 🔥 Technical Highlights

- ESP32 Microcontroller
- Embedded Web Server
- Real-Time Wi-Fi Control
- Multi-Servo Robotic Arm
- 3D Printed Mechanical Design
- Expandable for AI & IoT Applications

---

## 🎮 Controller Functions

| Command | Function |
|----------|-----------|
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

### 🚀 Space Exploration

- Sample Collection
- Surface Analysis
- Remote Operations

### 🏭 Industrial Automation

- Material Handling
- Pick-and-Place Operations
- Inspection Tasks

### 🛡️ Defense Applications

- Bomb Disposal
- Hazardous Material Handling
- Remote Surveillance

### 🚑 Disaster Management

- Search and Rescue
- Debris Handling
- Remote Inspection

### 🎓 Education & Research

- Electronics Learning
- Embedded Systems
- Engineering Prototyping

---

## 🔮 Future Improvements

- AI-Based Object Detection
- Autonomous Navigation
- Camera Integration
- Computer Vision
- Voice Control
- GPS Tracking
- IoT Cloud Monitoring
- SLAM Mapping

---

## 📑 Documentation

This repository contains:

- 📄 Project Report
- 🔌 Circuit Diagram
- 💻 Source Code
- 🌐 Web Interface Files
- 🖨️ 3D Models
- 📸 Project Images

---

## 👨‍💻 Team

**Diploma in Electronics Engineering**  
**Ambedkar DSEU Shakarpur Campus-I**

- Thakur Prasad Sharma
- Vikas Kumar
- Vishal Jangid
- Sudhir

### Project Guide

**Mr. Shyam Bambiwal**

---

## 🙏 Acknowledgements

Special thanks to:

- Prof. Mr. Shyam Bambiwal
- Prof. Mr. Sourabh Maurya (3D Printing Support)
- Ambedkar DSEU Shakarpur Campus-I

for their guidance and support throughout the project.

---

## 📜 License

This project is developed for educational and research purposes.

Feel free to use, modify, and improve it with proper attribution.

---

⭐ If you found this project useful, consider giving the repository a star.
