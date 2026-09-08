//karunya kanth (cic)
# ESP32 Home Automation using Blynk

A smart home automation system built with an ESP32 microcontroller that allows remote control of household appliances (lights, fans, etc.) via the Blynk IoT platform. Relay modules are used to switch AC appliances on and off through a custom Blynk mobile app dashboard.

## Overview

This project demonstrates core IoT concepts including microcontroller programming, cloud connectivity, and actuator control. Commands sent from the Blynk mobile app travel through Blynk Cloud and are received by the ESP32 over Wi-Fi, which then triggers relay modules to switch connected appliances.

## Architecture

The system works as follows:

1. User taps a toggle in the **Blynk app**
2. The command is sent over the internet to **Blynk Cloud**
3. Blynk Cloud forwards the command to the **ESP32** over Wi-Fi
4. The ESP32 runs a `BLYNK_WRITE()` callback and sets the corresponding **GPIO pin**
5. The GPIO signal switches the connected **relay**
6. The relay turns the **light or fan** on or off

*(See `architecture-diagram.png` in this repo for a visual overview.)*

## Features

- Remote on/off control of two appliances (expandable to more)
- Real-time control via the Blynk mobile app
- Wi-Fi based communication, no physical proximity required
- Simple, low-cost hardware setup

## Tech Stack

- **Microcontroller:** ESP32
- **IDE:** Arduino IDE
- **Language:** C/C++
- **IoT Platform:** Blynk
- **Hardware:** Relay module(s), ESP32 dev board
- **Protocol:** Wi-Fi (via Blynk Cloud)

## Hardware Setup

| Component     | ESP32 Pin |
|----------------|-----------|
| Relay 1 (Light) | GPIO 12   |
| Relay 2 (Fan)    | GPIO 14   |

> Note: This project uses `LOW` to activate the relay and `HIGH` to deactivate it, matching common active-low relay modules. Check your relay module's specification before wiring.

## Setup Instructions

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/esp32-home-automation-blynk.git
   ```

2. Install the required libraries in Arduino IDE:
   - `Blynk` (BlynkSimpleEsp32)
   - ESP32 board support package

3. Rename `secrets.h.example` to `secrets.h` and fill in your own credentials:
   ```cpp
   #define BLYNK_AUTH_TOKEN "your_blynk_auth_token"
   #define WIFI_SSID "your_wifi_ssid"
   #define WIFI_PASS "your_wifi_password"
   ```

4. Wire the relay modules to GPIO 12 and GPIO 14 (or update the pin definitions in the code to match your wiring).

5. Upload the sketch to your ESP32 using Arduino IDE.

6. In the Blynk app, create a new device and set up two switch widgets linked to virtual pins **V0** and **V1**.

## Security Note

Credentials (Wi-Fi password and Blynk auth token) are kept in a separate `secrets.h` file, which is excluded from version control via `.gitignore`. Never commit real credentials to a public repository — always use a `secrets.h.example` template with placeholder values instead.

## Future Improvements

- Add authentication/access logging for device control
- Support additional appliances and sensor feedback (e.g. current status readback)
- Add scheduling and voice assistant integration

## Author

karunya kanth
Computer Science and Engineering (IoT & Cybersecurity focus)
Sasi Institute of Technology & Engineering
