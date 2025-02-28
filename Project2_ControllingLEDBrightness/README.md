# Project 2: Controlling LED Brightness

## Purpose
This project creates a dynamic light sculpture for an art installation, allowing visitors to adjust a Red LED’s brightness with a potentiometer, enhancing visual interactivity.

## Components Used
- Potentiometer 10kΩ
- Red LED
- Resistor (220Ω)
- Breadboard
- Jumper Wires
- Arduino (ATmega328P-16U2 or CH340G)
- 50cm USB Cable

## Circuit Setup
- Connected Potentiometer: Left pin to 5V, middle pin to A0, right pin to GND.
- Connected Red LED to Arduino pin 9 with a 220Ω resistor to GND.
- Used jumper wires and breadboard for connections.

## Code
The Arduino sketch reads the potentiometer’s analog value (0–1023) on A0, maps it to 0–255, and uses PWM on pin 9 to adjust the LED’s brightness. See `code.ino` for details.

## Challenges and Lessons Learned
- Learned how to use analog input and PWM for variable control.
- Mastered scaling values with `map()` and troubleshooting LED brightness issues.
- Discovered the importance of resistor placement and LED polarity.

## Circuit Diagram
See `circuit_diagram.png` for the breadboard layout.