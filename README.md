# 🏠 ESP32 Home Automation using Blynk

A smart-home prototype that allows appliances such as lights and fans to be controlled remotely using an **ESP32**, **Wi-Fi**, and the **Blynk IoT platform**.

## 🎯 Project Goal

Demonstrate how an IoT device receives commands from a mobile application through the cloud and controls physical hardware.

## 🔄 System Architecture

```text
Blynk Mobile App
       ↓
   Blynk Cloud
       ↓
      Wi-Fi
       ↓
      ESP32
       ↓
   GPIO Output
       ↓
   Relay Module
       ↓
   Appliance
```

## ✨ Features

- Remote appliance control
- Wi-Fi connectivity
- Blynk mobile dashboard
- ESP32-based control
- Relay-based switching
- Expandable to additional devices

## 🛠️ Tech Stack

- ESP32
- C/C++
- Arduino IDE
- Blynk
- Wi-Fi
- Relay modules

## 🔌 Example Pin Configuration

| Appliance | ESP32 GPIO |
|---|---:|
| Light | GPIO 12 |
| Fan | GPIO 14 |

> Check your relay module documentation before wiring.

## 🚀 Setup

1. Clone the repository.
2. Install ESP32 board support in Arduino IDE.
3. Install the Blynk library.
4. Create `secrets.h` using the example template.
5. Add your Wi-Fi and Blynk credentials.
6. Connect the relay module.
7. Upload the sketch.
8. Configure the Blynk dashboard.

## 🔐 Security

**Never commit real Wi-Fi passwords or Blynk tokens.** Keep secrets local and excluded through `.gitignore`.

## 🔮 Future Improvements

- Device authentication
- Access logging
- Sensor feedback
- Scheduling
- Energy monitoring
- Voice-assistant integration
- Stronger IoT security controls

## 👨‍💻 Author

**Karunya Kanth**  
B.Tech CSE — Cybersecurity & IoT Student | Sasi Engineering
