# ESP32 Camera Web Server

An ESP32-CAM sketch that streams live video and takes snapshots through a browser, based on Espressif's `CameraWebServer` example from the [arduino-esp32](https://github.com/espressif/arduino-esp32) core.

## Setup

1. Install the ESP32 board package in the Arduino IDE.
2. Pick your camera module in `board_config.h`.
3. Copy `secrets.example.h` to `secrets.h` and enter your Wi-Fi name and password, plus the web page login (`HTTP_AUTH_HEADER`).
4. Select a board with PSRAM enabled and the partition scheme from `partitions.csv`, then upload.
5. Open the Serial Monitor (115200 baud) and browse to the IP address it prints.
