ROLL: Rotation Oriented Link Layer – Gyroscopic Mouse
This project turns an ESP32-C3 (Seeed XIAO) and an ADXL335 accelerometer into a fully functional wireless motion-based mouse using the custom ROLL (Rotation Oriented Link Layer) protocol.

#🚀 Features
Real-time cursor movement based on accelerometer tilt (X/Y axis).
Left & Right Click buttons.
Scroll Up & Scroll Down buttons.
Works with Python backend (pyautogui) to control the system cursor.
Extensible to BLE HID in future updates.

#🛠️ Hardware Required
Seeed Studio XIAO ESP32-C3
ADXL335 (3-axis accelerometer)
4 × Tactile push buttons (for clicks & scrolls)
Breadboard + jumper wires

#📌 Pinout Connections
ADXL335 → ESP32-C3
ADXL335 Pin	ESP32-C3 Pin
VCC	3V3
GND	GND
X	D1 (GPIO2)
Y	D2 (GPIO3)
Z	D3 (GPIO4)
Buttons → ESP32-C3
Button	ESP32-C3 Pin
Left Click	D4 (GPIO5)
Right Click	D5 (GPIO6)
Scroll Up	D6 (GPIO7)
Scroll Down	D7 (GPIO21)
Each button: one leg → pin, opposite leg → GND.

#💻 Software
Arduino IDE for ESP32-C3 firmware
Python 3 + pyserial + pyautogui on host PC

#📂 Repository Structure
ROLL-Mouse/
│── firmware/         # Arduino code for ESP32-C3
│── python-client/    # Python script for cursor + clicks
│── docs/             # Wiring diagrams, pinouts, notes
│── README.md         # Project documentation

#📈 Future Plans
Upgrade to BLE HID for direct wireless mouse without Python bridge.
Add motion smoothing & sensitivity settings.
Integrate gesture-based controls.
