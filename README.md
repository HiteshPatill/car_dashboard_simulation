# Car Dashboard Simulation Using CAN Protocol

## Overview

This project simulates an automotive dashboard using the CAN (Controller Area Network) protocol with three PIC18F4580 microcontroller-based ECUs.
The system demonstrates real-time communication between multiple ECUs, where sensor data is transmitted over the CAN bus and displayed on a Master ECU.

## System Architecture

The project consists of three ECUs:

### ECU 1 – Speed & Gear
- Reads vehicle speed using a potentiometer (ADC).
- Reads gear position using a digital keypad.
- Transmits speed and gear data over the CAN bus.

### ECU 2 – RPM & Indicator
- Reads engine RPM using a potentiometer (ADC).
- Reads turn indicator status using a digital keypad.
- Transmits RPM and indicator status over the CAN bus.

### Master ECU
- Receives CAN messages from both ECUs.
- Processes the received data.
- Displays Speed, Gear, RPM, and Indicator status on a Character LCD (CLCD).

## Features

- Multi-ECU communication using CAN Protocol
- Real-time data transmission
- ADC interfacing using potentiometers
- Digital keypad interfacing
- Character LCD (CLCD) display
- UART debugging using Tera Term
- Modular Embedded C implementation

## Hardware Used

- PIC18F4580 Microcontrollers (3)
- MCP2551 CAN Transceiver
- Potentiometers
- Digital Keypad
- Character LCD (16x2 CLCD)
- USB-to-UART Converter
- Power Supply

## Software Used

- MPLAB X IDE
- XC8 Compiler
- Embedded C
- Tera Term

## Project Flow

```
Potentiometer (Speed) ---> ECU 1 ----\
Gear Keypad ----------->              \
                                       ---> CAN BUS ---> Master ECU ---> CLCD
Potentiometer (RPM) ----> ECU 2 -----/
Indicator Keypad ------->             /
```

## Folder Structure

```
Car_Dashboard/
│
├── ECU1_Speed_Gear/
├── ECU2_RPM_Indicator/
├── Master_ECU/
└── README.md
```

## Learning Outcomes

- CAN Protocol implementation
- Multi-ECU communication
- Embedded C programming
- ADC interfacing
- Digital keypad interfacing
- CLCD interfacing
- UART debugging
- Real-time embedded system design

## Author

**Hitesh Patil**
