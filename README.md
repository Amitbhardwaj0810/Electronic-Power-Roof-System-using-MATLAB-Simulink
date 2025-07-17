# Electronic Power Roof System using MATLAB Simulink
## **Our team include**:<br> Amit Kumar<br> Venaktesh Maraddi<br> Sohail Nagaralli<br> Shubhan Kulkarni

## Description:
The goal of this project is to design a smart car roof system using MATLAB Simulink that enhances safety, comfort, and automation by controlling the sunroof and ventilation system based on real-time vehicle conditions such as speed, rain, airbag status, and temperature.

## Project Overview:

- Simulates Sunroof Control and Parking Ventilation System.
- Inputs: Speed, Rain, Airbag, Temperature, Parking status.
- Implemented using MATLAB Simulink for model-based design.
  
## Features Selected:

- Automatic Sunroof Control based on speed, rain, and airbag sensor values.
- Ventilation Activation in Parking Mode if the ambient temperature exceeds a defined threshold.
- Visual Status Indication using bulbs in Simulink.  
- Integrated Logic Output using Boolean logic gates for decision-making.
- Simulated Safety & Comfort Enhancements for real-world vehicle scenarios.

## System Components
Inputs:
- Speed (0–50 km/h)
- Rain Sensor (ON/OFF)
- Airbag Sensor (ON/OFF)
- Temperature (0–100°C)
- Parking Status (ON/OFF)

Control Blocks:
- Sunroof Control Logic
  - Opens if: Speed < 30, no rain, no airbag
- Parking Subsystem Logic
  - Activates ventilation if: Parked + Temp > 40°C

Output Logic:
- Final output = OR(Sunroof Logic, Parking Logic)
- LED shows ON/OFF status in simulation.

## Logic Equation
L = A + V + S̅
- A = Airbag, V = Speed Logic, S̅ = NOT Rain
- Ensures the sunroof opens only under safe, dry conditions.

## Target Hardware
Designed in Simulink, scalable for STM32 microcontroller deployment.

## 📚 Learnings
- Model-based automotive system design.
- Logical gating & safety condition simulation.
- Simulink block integration and subsystem control.
