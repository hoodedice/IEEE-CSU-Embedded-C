IEEE-CSU-Embedded-C
===================
# Programming Environment
Download MPLAB X and the XC8 compiler.  The MPLAB environment is based off of Netbeans, so it may be familar to people who have programmed in Java.

# Programming Hardware
Hardware is required to program a microprocessor.  You can buy these programmers from microchip (if you want to program a microchip processor).  Be sure to NOT buy a third party programmer since they do not work very well.

If you are working with microchip processors, use a pickit 2, pickit 3, or ICD 3.  We are using a pickit 2 today.

# Code Setup

## Configuration bits
Configuration bits are used to configure settings that can not change while the microprocessor is running.  These are specific to each processor, and can be configured with the GUI built into MPLAB X.  To get to the GUI editor, select Window \>\> PIC Memory Views \>\> Configuration bits.  This menu will show each configuration bit for the microprocessor chosen when creating a project in MPLAB.  Code will then be generated that can be copied into the main.c file.

The GUI will generate code using the \#pragma directive, but there are two ways to set these bits.

### Method \#1, \#pragma directive
The \#pragma is used to designate that this code is specific to the microprocessor, and not the C language.  If we use this method, we have to specify each bit on a single line of code.  The follow is an example to enable the reset pin of the microprocessor.

```c
#pragma config MCLRE = ON
```

###Method \#2 __CONFIG method
The __CONFIG method sets all of the bits in a configuration register with a single line of code.  Since __CONFIG is not standard to C compilers, MPLAB will show that these lines of code have an error.  The code will still compile anyways and work the same as the \#pragma method.

```c
__CONFIG(3, PBADEN_OFF & LPT1OSC_OFF & MCLRE_ON);
```


# Input/Output
Programming a microprocessor is very similar to programming a high-level program for a computer.  One of the differences is how input and output is handled.  In a computer, we mostly deal with string input and output with users.  In a microprocessor, we are only able to turn things on or off, so we will deal with boolean inputs and outputs from users.  An example of an input is a pushbutton switch.  An example of out is turning a motor, or turning on an LED.

## Set pin as input pin or output pin
Before we get input from a user we need to tell the microprocessor which pins will be used as input and which ones will be used as output.  We do this by looking at the datasheet and seeing what pin our switch, LED, or motor is connected to.  The pin label will have two parts, a letter and a number, both of those to use a pin as input or output.  Once we know the pin letter and number we set the respective tri-state register.

If we set the tri-state register high (1), it will be used as input.
If we set the tri-state register low (0), it will be used as output.

```c
TRISD0 = 1; //Set pin D0 as input
TRISD1 = 0; //Set pin D1 as output
```

## Set output
If a pin is set as output, set the respective bit (letter, and number) in the latch register.

If we set the latch register high (1), the output will be at Vdd.
If we set the latch register low (0), the output will be Vss.

```c
LATD0 = 0; //Set pin D0 to Vss if it is set as output
LATD1 = 1; //Set pin D1 to Vdd if it is set as output
```

## Read input
If a pin is set as input, read the respective bit (letter, and number).

If the bit is high (1), then the input is at Vdd.
If the bit is low (0), then the input is at Vss. 

```c
int a;

a = RD0; //Read pin D0 if it is set as input
``'

# Delays
With a microcontroller, it is essential to have delays, otherwise things will happen at a fast rate.  If you turn an LED on and then turn it off without a delay, the switching will occur too fast to observe the blinking pattern.

For the IEEE robot, we will use a delay function that is already made.  Make sure to make delay.c and delay.h a part of the project.  In any .c that you need a delay, make sure to \#include "delay.h".

The DelayMs(int) function will cause the microcontroller to delay as many milliseconds as passed as a parameter.  This has to be an integer number of milliseconds.  It is also not a good idea to put too large of a number, especially if you are passing in a variable instead of a constant.  If you would like to delay for more than 500 milliseconds, call this function multiple times.

For example, if you would like to delay for 1 second:

'''c
DelayMs(500); //Delay for 500 ms twice instead to get a 1 s delay
DelayMs(500);
'''
