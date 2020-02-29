# Career Day for Girls 2020!

## Introduction
We're excited to get to play with some robotics with all of ya'll over the next 30 minutes. However, that's not a lot of time. We will  use this repository to outline what we want to get done today and hopefully as a reference for you in the future to look back on.

## Resources
We will be using an Arduino Nano today as our microprocessor. It is a low cost, super functional and easy to interface 'mini computer'. I like to think of it as the 'brain' of my project. The awesome thing about Arduino is that millions of people like you and me use it and there is almost infinite documentation online about how to do so (see **Reference Links** below)

## Setup
1. Plug your board into your computer
2. Open Arduino IDE
	1. Under Tools>Board> select "Arduino Nano"
	2. Under Tools>Port> select the one that says Arduino
	3. Under Tools>Processor> select Atmega328p (old bootloader)

## Challenges 

### LED | Button Blink
![image](media/button.png)
1. Wire up your LED and button as shown here!
2. Talk through the code with your partner
3. Run it!

### LED | Button AND
1. Wire up another button (look at how the first is wired)
2. Write code so that your LED lights up when button_1 AND (&&) button_2 are pushed
	* HINT: you'll probably have to definen another input
	* HINT: the logical and symbol in the c programming language looks like this : &&

### LED | Potentiometer

### LED | Potentiometer | Button AND

### Serial Write!


### Reference Links (look back on this at home!)
#### Arduino Reference
Arduino has changed the game of how we make robots in the past 10 (!) years. They have open sourced (made the fundamental building blocks of their products freely available to anybody!!!) hardware in a way no one really had before. For us this means there is a HUGE community of passionate people supporting the development of cool and fun projects with Arduino. These links are a great way to start looking into Arduino but you can also google any question you have and find a world of answers.
* Here is a link to download the Arduino development enviroment at home: https://www.arduino.cc/en/Main/Software
* Here is gita there reference link to how to use Arduino functions: https://www.arduino.cc/reference/en/

#### Adafruit Reference
Adafruit is an amazing place founded by [Lady Ada](https://en.wikipedia.org/wiki/Limor_Fried) that has revolutionized the world of open source hardware. They have phenomenal documentation, project ideas, and project guides for you to follow along with. 
* A reference for a very similar board: https://www.adafruit.com/product/2590
* Link to a guide of Adafruit Neopixels, if you liked the LEDs we played with today here's a way to take it to the next level: https://learn.adafruit.com/adafruit-neopixel-uberguide
