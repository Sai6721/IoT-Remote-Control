# Cloud Control Workflow

## Components

- ESP32 Development Board
- LED
- 220Ω Resistor
- WiFi Network
- Adafruit IO Dashboard

## Working

1. Connect ESP32 to WiFi.
2. Create an LED feed on Adafruit IO.
3. Add a Toggle Button widget connected to the LED feed.
4. ESP32 sends an HTTP GET request to check the latest feed value.
5. If the value is **1**, the LED turns ON.
6. If the value is **0**, the LED turns OFF.
7. Repeat every 10 seconds.

## Protocol

- HTTP GET

## Platform

- Adafruit IO

## Benefits

- Remote device control
- Real-time communication
- IoT automation