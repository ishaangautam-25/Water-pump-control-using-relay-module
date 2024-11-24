Water-pump-control-using-relay-module


This project implements an automated water management system for aeroponic towers using a Node MCU and a 4-channel relay module to control water pumps. The system maintains optimal moisture levels by monitoring the water level in individual towers and activating pumps as needed.

Overview

The aeroponic towers require a consistent water level to ensure proper plant growth. As plants absorb water and due to evaporation, the water level may fall below the required threshold. This system uses water level sensors and a relay module to automate the process of filling the water to the required level.

Working Principle

The system utilizes a 4-channel relay module to control up to four water pumps. The Node MCU is programmed to monitor water level sensors. When the water level in any of the aeroponic towers drops below a specified level, the corresponding water level sensor sends a high signal (1) to the Node MCU. The relay associated with that sensor is then triggered, activating the water pump until the water level sensor indicates that the level is sufficient (low signal or 0).

Components Required

| S.No. | Component                       | Model               | Quantity |
|-------|---------------------------------|---------------------|----------|
| 1     | Node MCU                        | ESP8266             | 1        |
| 2     | Relay Module                    | 4-channel           | 1        |
| 3     | Water Pump                      | 12V 5000 RPM        | 4        |

1. Relay Module

The 4-channel relay module contains four 5V relays and associated components that simplify interfacing with microcontrollers and sensors. 

- Specifications:
  - Supply Voltage: 3.75V to 6V
  - Trigger Current: 5mA
  - Active Current: ~70mA (single relay), ~300mA (all four)
  - Maximum Contact Voltage: 250V AC, 30V DC
  - Maximum Current: 10A

2. Water Pump (Peristaltic)

A peristaltic pump is a type of positive displacement pump designed for various fluid applications. The fluid is contained within a flexible tube, and as the rotor rotates, rollers compress the tube to move the fluid.

- Specifications:
  - Supply Voltage: 12V DC
  - Temperature Range: 0℃ to 40℃
  - Flow Rate Range: 0.1-100 ml/min
  - Speed Range: 0.1-5000 rpm

Installation

1. Connect the Node MCU to the relay module according to the pin configuration specified in the documentation.
2. Wire the water pumps to the relay outputs.
3. Install the water level sensors in the aeroponic towers.
4. Upload the appropriate firmware to the Node MCU to manage the relay operations based on sensor inputs.

Usage

Once set up, the system will automatically monitor the water levels in the aeroponic towers. The water pumps will activate as needed to maintain the desired water level, ensuring optimal conditions for plant growth.

Contributing

Feel free to fork the repository and submit pull requests for any improvements or additional features.
