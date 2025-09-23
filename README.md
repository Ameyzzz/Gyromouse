# GyroMouse ROLL (Rotation Oriented Link Layer)

This project turns an Arduino + ADXL335 accelerometer into a fully functional computer mouse using Python.

## Features
- Move cursor by tilting accelerometer
- Left + Right click buttons
- Scroll up and down with buttons
- Python interface for OS cursor control

## Hardware Setup
- Arduino UNO/Nano
- ADXL335 accelerometer (X=A0, Y=A1)
- 4 buttons for left, right, scroll up, scroll down
- Buttons connected to pins D2–D5 with internal pull-ups

## Usage
1. Upload `arduino/gyromouse.ino` to Arduino.
2. Install Python requirements:
   ```bash
   pip install pyautogui pyserial
   ```
3. Run `python/gyromouse.py` (update COM port if needed).

## pinouts
ADXL335 to esp32-c3 XIAO
VCC → 3V3
GND → GND
X → D1
Y → D2
Z → D3

Buttons to esp32-c3 XIAO
Button 1 (Left Click): One leg → D4, other → GND
Button 2 (Right Click): One leg → D5, other → GND
Button 3 (Scroll Up): One leg → D6, other → GND
Button 4 (Scroll Down): One leg → D7, other → GND