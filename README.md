# 8051-Based Motor Condition Monitoring System

## Project Overview

This project demonstrates a basic motor condition monitoring system using an 8051-compatible microcontroller. The firmware monitors two simulated digital warning inputs representing temperature and vibration conditions and controls visual and audible warning indicators.

The project uses Embedded C, Keil µVision, and Proteus Design Suite.

## Objectives

- Develop firmware for an 8051-compatible microcontroller.
- Monitor two digital warning inputs.
- Indicate normal operation using a green LED.
- Activate a red LED and buzzer when either warning input is HIGH.
- Compile the firmware and integrate it with a simulated microcontroller circuit.

## Hardware Components

- AT89C51-compatible microcontroller
- Two digital logic-state inputs
- Green LED and red LED
- Two LED current-limiting resistors
- Buzzer
- Crystal oscillator and associated capacitors
- Reset circuit and power connections

## Software Tools

- Keil µVision for Embedded C development and compilation
- Proteus Design Suite for circuit simulation

## Pin Configuration

| Signal | Microcontroller Pin |
|---|---|
| Temperature warning input | P1.0 |
| Vibration warning input | P1.1 |
| Green LED | P2.0 |
| Red LED | P2.1 |
| Buzzer | P2.2 |

## Operating Logic

When both warning inputs are LOW, the firmware turns on the green LED and turns off the red LED and buzzer.

When either warning input is HIGH, the firmware turns off the green LED and turns on the red LED and buzzer.

## Project Structure

- `firmware/` — Embedded C source code and generated HEX file.
- `circuit/` — Proteus project files.
- `reports/` — Internship reports.
- `screenshots/` — Build output and simulation evidence.

## How to Run

1. Open the firmware project in Keil µVision.
2. Build the project and enable HEX file generation if required.
3. Open the Proteus circuit.
4. Load the generated HEX file into the microcontroller's Program File property.
5. Run the simulation.
6. Change the two logic-state inputs and compare the output indicators with the expected behavior.

## Testing

Test all four combinations of the two digital inputs:

| P1.0 | P1.1 | Expected Output |
|---|---|---|
| LOW | LOW | Green LED ON; red LED and buzzer OFF |
| LOW | HIGH | Red LED and buzzer ON |
| HIGH | LOW | Red LED and buzzer ON |
| HIGH | HIGH | Red LED and buzzer ON |

Record the observed results after executing the tests in Proteus.

## Limitations

The warning inputs are simulated digital signals, not measurements from physical temperature or vibration sensors. This project demonstrates basic embedded firmware logic and simulation; it is not a certified industrial motor protection system.

## Author

Soumyaa Satham

## Internship Task

Week 2 — Firmware Development for a Simulated Embedded System
