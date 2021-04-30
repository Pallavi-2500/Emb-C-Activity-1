# Car Seat heater- Embedded C

## Project Description

This project implements the idea of a Car seat-heater temperature monitoring system. When a passenger is enters and seats inside a car and switches on the seat heater, the temperature sensor gets activated and starts sending the analog temperature values to ATMEGA328 microcontroller. These values are then displayed on a serial monitor using UART data transmission protocol. 

This project is basically broken into 4 separate modules. The functionality of each module is defined:

* Activity 1: Activating the temperature sensor when both conditions; passenger is seated inside the car and seat-heater is turned ON; are true.
* Activity 2: Implementation of Analog-to-Digital converter to did=gitize analog values received from the temperature sensor.  
* Activity 3: Representation of Temperature values using Pulse Width Modulation in an oscilloscope.
* Activity 4: Display of temperature data on a serial monitor with the help of UART data transmission protocol.

## Simulation

| Build | Codacy | CppCheck |
|:-------:|:-------:|:------:|
| | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/6ba094bda54e4ce19e67160b1e349322)](https://www.codacy.com/gh/Pallavi-2500/Emb-C-Activity-1/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Pallavi-2500/Emb-C-Activity-1&amp;utm_campaign=Badge_Grade) | [![Cppcheck](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeQuality.yml) | 


