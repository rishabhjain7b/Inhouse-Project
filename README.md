# Inhouse-Project
Temperature controlled DC fan

This project is solely based on AVR microcontroller

Temperature Controlled DC Fan

Introduction

This project deals with the following:
•	Digital temperature sensor
•	PWM Based DC Motor Speed Control
•	Temperature controlled DC fan

 Usually, electronic devices produce more heat. So this heat should be reduced in order to protect the device. There are many ways to reduce this heat. One way is to switch on the fan spontaneously. This project describes a circuit that automatically switches the fan when it detects the temperature inside the device greater than its threshold value.
This project also deals with showing the current temperature when installed inside a room and control the speed of roof top fan according to user’s comfort at that temperature eliminating human efforts.

Principle behind this Circuit

The first principle of this circuit is to display the digital temperature value. Here, ATmega8 microcontroller is used. The ATmega8 has inbuilt analog to digital converter with six multiplexed channels. This reduces interfacing of external analog to digital converter IC. 
The analog temperature value is directly applied to input ADC channels of microcontroller. Successive approximation method is used for Analog to digital conversion internally.
The heart of this project is ATmega8 controller. These controllers consist of 2 PWM modes. 
The main principle of the circuit is to switch on the fan connected to DC motor when the temperature is greater than a threshold value.
The microcontroller continuously reads temperature from its surroundings. The temperature sensor acts as a transducer and converts the sensed temperature to electrical value. This is an analog value which is applied to the ADC pin of the microcontroller.


Circuit Components

•	Atmega8 microcontroller
•	Lm35 temperature sensor
•	16x2 Alphanumeric LCD
•	DC motor

How to Operate this Circuit?

•	Initially switch the power supply.
•	Microcontroller starts reading the temperature of the surroundings.
•	The analog value of temperature is given by the temperature sensor.
•	This analog value is applied to the analog to digital converter pin of the micro controller.
•	This analog value is converted to the digital value by the microcontroller using successive approximation method internally.
•	Read the value from ADC register and assign value to port which has LCD interfaced.
•	The two digit value obtained can be displayed on two seven segments or on a 16x2 alphanumeric LCD.
•	When the temperature is greater than the threshold value, microcontroller sends a command to the controller to switch ON the motor.
•	Thus fan starts rotating on a particular speed as specified by the duty cycle of the PWM pulse.
