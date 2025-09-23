import serial
import pyautogui
import time

# Change COM port as needed
arduino = serial.Serial('COM3', 9600)
time.sleep(2)  # wait for Arduino reset

pyautogui.FAILSAFE = False  # prevent corner escape

while True:
    data = arduino.readline().decode().strip()
    try:
        x, y, left, right, up, down = map(int, data.split(","))
        
        # Move cursor
        pyautogui.moveRel(x, -y, duration=0.01)

        # Mouse clicks
        if left:
            pyautogui.click(button="left")
        if right:
            pyautogui.click(button="right")

        # Scrolling
        if up:
            pyautogui.scroll(50)
        if down:
            pyautogui.scroll(-50)

    except:
        pass
