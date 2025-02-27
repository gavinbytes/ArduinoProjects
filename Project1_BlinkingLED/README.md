# Project 1: Blinking LED Sequence

## Purpose
This project creates a blinking LED sequence to simulate a traffic light signal for an educational tool, teaching students about binary logic and timing.

## Components Used
- Red LED
- Yellow LED
- Resistors (220Ω each)
- Breadboard
- Jumper Wires
- Arduino (ATmega328P-16U2 or CH340G)
- 50cm USB Cable

## Circuit Setup
- Connected Red LED to Arduino pin 13 with a 220Ω resistor to GND.
- Connected Yellow LED to Arduino pin 12 with a 220Ω resistor to GND.
- Used jumper wires and breadboard for connections.

## Code
The Arduino sketch alternates Red and Yellow LEDs, each on for 1 second. See `blinkingLED.ino` for details.

## Challenges and Lessons Learned
- Learned about LED polarity and resistor values to prevent damage.
- Mastered basic digital output and timing with `delay()` in C/C++.
- Troubleshot issues like LEDs not lighting (e.g., wrong resistor or connection errors).

## Circuit Diagram
See `blinkingLEDs` for the breadboard layout.