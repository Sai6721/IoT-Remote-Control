# IoT-Remote-Control
# IoT Task 5 – Remote Control (Controlling the Device from the Cloud)

## Project Overview

This project demonstrates how to remotely control an LED connected to an ESP32 using Adafruit IO. The ESP32 continuously checks a cloud feed and turns the LED ON or OFF based on the received command.

## Objective

- Connect ESP32 to WiFi.
- Read commands from Adafruit IO.
- Control an LED remotely.
- Understand cloud-to-device communication.

## Hardware Required

- ESP32 Development Board
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

## Software Required

- Arduino IDE
- Adafruit IO Account

## Features

- WiFi connectivity.
- Reads cloud commands.
- Controls LED remotely.
- Checks for updates every 10 seconds.

## Expected Output

The LED turns ON when the cloud feed contains **1** and turns OFF when it contains **0**.

## Project Structure

```
IoT-Remote-Control/
│── README.md
│── cloud_control.md
│── remote_control.ino
└── screenshots/
```

## Learning Outcomes

- Cloud-based device control.
- HTTP GET requests.
- Remote IoT automation.
- ESP32 WiFi communication.

## Author

SoftNexis Internship – IoT Task 5