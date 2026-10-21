ESP32 SPI Communication with microSD Card

About the Project
This project demonstrates SPI communication between an ESP32 development board and a microSD card using PlatformIO and Wokwi.

Features
- Initializes the microSD card using SPI.
- Creates and writes data to a text file.
- Reads the saved data back from the file.
- Displays status messages through the Serial Monitor.

Hardware and Tools
- Microcontroller: ESP32 DevKit
- Storage: microSD card module
- Communication: SPI
- Development environment: PlatformIO
- Simulation: Wokwi

SPI Pin Connections

| microSD Module | ESP32 |
|---|---|
| DI / MOSI | GPIO 23 |
| DO / MISO | GPIO 19 |
| SCK | GPIO 18 |
| CS | GPIO 5 |
| VCC | 3.3V |
| GND | GND |

Test Results
The project successfully initialized the SD card, wrote data to `test.txt`, and read it back through the Serial Monitor.

Example output:

```text
===== ESP32 STARTED =====
Serial communication is working!
Initializing SD card...
SD card initialized successfully.
Data written to test.txt
Reading back from test.txt:
Hello from ESP32 via SPI!
```

Project Files
- `src/` — ESP32 source code
- `platformio.ini` — PlatformIO configuration
- `wokwi.toml` — Wokwi simulation configuration
- `diagram.json` — circuit diagram

## Project Status
SPI communication and SD card file read/write operations were successfully tested in simulation.

Created as a hands-on embedded systems learning project.
