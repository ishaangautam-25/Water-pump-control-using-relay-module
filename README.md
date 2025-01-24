# Peristaltic pump control using relay module 

This project focuses on maintaining the moisture level in aeroponic towers by recirculating water. The system is designed to monitor and control the water levels automatically using a NodeMCU, a 4-channel relay module, and water pumps. It ensures optimal water availability for aeroponic systems by refilling water when levels fall below a specified threshold.  

## Table of Contents  

1. [Introduction](#introduction)  
2. [Working Principle](#working-principle)  
3. [Components Required](#components-required)  
4. [Component Descriptions](#component-descriptions)  
5. [Circuit Diagram](#circuit-diagram)  
6. [Usage Instructions](#usage-instructions)  

---

## Introduction  

Aeroponic towers require constant moisture levels to sustain plant growth. This is achieved by recirculating water within the system. Over time, due to plant absorption and evaporation, water levels may drop below the required threshold for effective recirculation. The proposed system uses water level sensors and a NodeMCU-controlled relay module to detect and refill water as needed, ensuring uninterrupted operation.  

---

## Working Principle  

1. A 4-channel relay module is used to control four individual water pumps.  
2. Each aeroponic tower has a water level sensor (digital switch) to monitor its water level.  
3. When the water level falls below a specified minimum, the corresponding water level sensor outputs **HIGH (1)**.  
4. The NodeMCU triggers the relay for the respective water pump to refill water.  
5. The pump stops once the water level sensor outputs **LOW (0)**, indicating the desired level is reached.  

---

## Components Required  

| S.No. | Component          | Model        | Quantity |  
|-------|---------------------|--------------|----------|  
| 1     | NodeMCU             | ESP8266      | 1        |  
| 2     | Relay Module        | 4-Channel    | 1        |  
| 3     | Water Pump          | 12V 5000 RPM | 4        |  

---

## Component Descriptions  

### 1. NodeMCU (ESP8266)  
A microcontroller with built-in Wi-Fi capability, used to interface with sensors and control relays for automation.  

### 2. Relay Module (4-Channel)  
The 4-channel relay module allows independent control of four water pumps.  
- **Supply Voltage**: 3.75V - 6V  
- **Trigger Current**: 5mA  
- **Relay Max Contact Voltage**: 250V AC / 30V DC  
- **Relay Max Current**: 10A  

### 3. Water Pump (Peristaltic)  
A positive displacement pump designed for smooth fluid delivery.  
- **Supply Voltage**: 12V DC  
- **Speed Range**: 0.1 - 5000 RPM  
- **Flow Rate**: 0.1 - 100 ml/min  

---

## Circuit Diagram  

[Insert the circuit diagram image or ASCII art representation here.]  

---

## Usage Instructions  

1. **Hardware Setup**  
   - Connect the NodeMCU to the 4-channel relay module.  
   - Wire the relay outputs to the respective water pumps.  
   - Connect water level sensors to the NodeMCU digital pins.  

2. **Software Setup**  
   - Upload the control code to the NodeMCU using the Arduino IDE.  
   - Ensure the logic in the code matches the pin configuration of your setup.  

3. **Operation**  
   - Power the system.  
   - Monitor the water level sensors.  
   - The pumps will automatically refill water as needed based on sensor readings.  

---
 
