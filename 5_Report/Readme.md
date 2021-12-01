
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

# Block   Diagram:-

![Block Diagram](https://user-images.githubusercontent.com/70369948/143669285-190349aa-bc30-4a53-bde9-3610c8f6836d.jpg)

# Flow chart Diagram:-

![Flow Chart (1)](https://user-images.githubusercontent.com/70369948/143670773-a55fd8a0-f7a7-45a6-8609-2ed61b463506.jpg)

# Simulations

![1](https://user-images.githubusercontent.com/70369948/143998302-34e52f20-a3a4-4358-b4a0-46d1cd405df6.JPG)

![2](https://user-images.githubusercontent.com/70369948/143998357-ea014217-ddb3-4958-9e8f-fafb0a278b0a.JPG)

Bill of Materils

[Temp.monitersystem-bom.txt](https://github.com/SRI200009/M2-Embedded_Temparature-monitoring-System/files/7624658/Temp.monitersystem-bom.txt)


# Folder Structure

|Folder | Description |
|-------|------------ |
| inc   | Header files|
| src   | Source files|


TEST PLAN and Corresponding Output

High Level Test Plan


|   Test                                               | Exp I/P                |           Exp O/P            |      Actual Out          |    
| -------------                                        |--------------          | ------                       | ------------------       | 	
| Function of Seat Sensor                              |If person sits on seat  | Detects person               | Detects person           | 	
| Function of Temprature  sensor                       |Temprature change       | Detects Temprature Change    | Detects Temprature Change| 	
| Function of Display                                  |change in heat          | Display the output           | Display the output       | 	
	



Low Level Test Plan


|   Test                                               | Exp I/P                                     |           Exp O/P            |      Actual Out          |    
| -------------                                        |--------------                               | ------                       | ------------------       | 	
| Temperature changes                                  |if user Temprature=Heater Temprature         | Temprature is displayed      | Temprature is displayed  | 	
| set Heater function                                  |When request sent                            | Sets Heater                  | Sets Heater              | 	



Reffence Video



https://user-images.githubusercontent.com/70369948/144039469-48c8e2f5-de07-4e62-a049-4a7b81a42101.mp4








