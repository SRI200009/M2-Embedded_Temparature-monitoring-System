# Introduction

In this, the controller aims at control the temperature in the car. Firstly, if a person is seated in a car then the Button sensor will be activated. If a person is not seated, then the Button sensor will not be activated. When the Button sensor is activated then automatically heater sensor will be activated. Then temperature sensor monitors the temperature and sends analog value to atmega328 microcontroller.

## Features
1.It sense whether the person is existed or not.   
2.The person can request, the Heater accordinging to that the heat will generate.  
3.This system is reliable.  
4.The person can modify the temperature by observing the display which is given in the system.  
5.It is compitable.   

 ## SWOT Analysis- Strengths, and Weakness, Opportunities Threats
 ## Strength
 1.Low cost and compitable system.
 2.User Friendly.
 3.Easy to modify the temperature values.
 4.It is efficient and convenient.

 ## Weakness
 1.It can be used only in europian countries.
 2.Low sensitivity.

## Opportunities
1.It can be implemented by replacing heater by air conditioners.
2.It will be helpful in all the countries.

## Threats
Because of low senstivity it will not suitable in high temperature Environment.

## 4W's and 1'H
## Why
It can monitoring our body temperature even when we are healthy and it can help to detect disease early and help us if it is okay to go to work or college or school.

## What
Seat Monitoring System based on Temperature.

## When
It can be used in only Low temperature.

## Where  
It can be used in Industries like Automobile.

## How
It can be modified by changing the Temperature.

## Detail Requirements
## High Level Requirements
| ID | DESCRIPTION | STATUS |
| :--: | :---: | :----: | 
|    1 | Microcontoller | Program for the project |
|    2 | Seat Sensor | Whether the person is existed on seat or not |
|    3 | Temperature Sensor | To measure temperature |
|    4 | Heat Generate | Seat should be heated |
|    5 | Display | Generated heat should be displayed on LCD |

## Low Level Requirements
| ID | DESCRIPTION | STATUS |
| :--: | :---: | :----: |
|         1 | ATmega328 | Here i have used atmega328 microcontroller |
|         2 | PIR(Passive Infrared) sensor | To detect the presence of human |
|         3 | LM355 sensor | To measure temperature |
|         4 | ADC with PWM-Fast | It operate at a wide frequency range |
|         5 | LCD | Temperature should be displayed on LCD |




