/* 
 * File:   main.c
 * Created on November 7, 2014, 11:46 AM
 *
 * This code is to demonstrate how to use basic I/O of a PIC18F4525
 * microcontroller.
 *
 */

#include <xc.h>
#include "delay.h"


//Set Fuse Bits-----------------------------------
__CONFIG(1, OSC_ECIO6 & FCMEN_OFF & IESO_OFF);
__CONFIG(2, PWRT_OFF & BOREN_OFF & WDT_OFF);
__CONFIG(3, PBADEN_OFF & LPT1OSC_OFF & MCLRE_ON);
__CONFIG(4, STVREN_OFF & LVP_OFF & XINST_OFF & DEBUG_ON);
__CONFIG(5, CP0_OFF & CP1_OFF & CP2_OFF & CPB_OFF & CPD_OFF);
__CONFIG(6, WRT0_OFF & WRT1_OFF & WRT2_OFF & WRTC_OFF & WRTB_OFF & WRTD_OFF);
__CONFIG(7, EBTR0_OFF & EBTR1_OFF & EBTR2_OFF & EBTRB_OFF);


//Function prototypes----------------------
//Initialization function
void Init_Microcontroller(void);

//Movement functions
void Move_Forward(void);
void Move_Backward(void);
void Steer_Right(void);
void Steer_Left(void);

//Sensor reading functions
int Check_Front_Sensor(void);
int Check_Right_Sensor(void);
int Check_Left_Sensor(void);
//----------------------Function prototypes



/*
 * main function
 *
 * This function needs to call the other functions in this program.
 *
 * This function needs to make the robot move forward unless a sensor
 * is triggered.
 */
void main(){

}

/*
 * Init function
 * This function sets up the input/output of the PIC18F4525
 *
 * Set up the Sensors as input
 * Set up the Motors as output
 * Make sure to set up the Set as 0 pin are also outputs
 */
void Init_Microcontroller() {
   // Input pins
    TRISB4 = 1; // Right Sensor
    TRISB2 = 1; // Left Sensor
    TRISB3 = 1; // Front Sensor

    //Output pins
    TRISD0 = 0; // RD0, pin 38
    TRISD2 = 0; // RD2, pin 40

    TRISD1 = 0; // Right Motor
    TRISD2 = 0; // Left Motor
}


/*
 * Move Forward
 * This function should make the robot move forward by controlling the left
 * and right motors on
 *
 * Set the correct motors on to make the robot move forward
 * Make sure to set the pins listed as Set to 0 as 0.
 */
void Move_Forward(void){

}

/*
 * Move Backward
 * This function should make the robot move backward by controlling the left and
 * right motors
 *
 * Set the correct motors on to make the robot move backward
 * Make sure to set the pins listed as Set to 0 as 0
 */
void Move_Backward(void){

}

/*
 * Steer Right
 * This function should make the robot curve to the right by controlling the
 * left and right motors
 *
 * Set the correct motors on to make the robot steer right
 * Make sure to set the pins listed as Set to 0 as 0
 */
void Steer_Right(void){

}

/*
 * Steer Left
 * This function should make the robot curve to the left by controlling the
 * left and right motors
 *
 * Set the correct motors on to make the robot steer left
 * Make sure to set the pins listed as Set to 0 as 0
 */
void Steer_Left(void){

}

/*
 * Check Front Sensor
 * Returns status of sensor
 * Returns 0 if sensor is not triggered
 * Returns 1 if sensor is triggered
 *
 * This function should read the pin attached to the sensor and return a value
 * that represents the status of the motor
 */
int Check_Front_Sensor(void){

}

/*
 * Check Right Sensor
 * Returns status of sensor
 * Returns 0 if sensor is not triggered
 * Returns 1 if sensor is triggered
 *
 * This function should read the pin attached to the sensor and return a value
 * that represents the status of the motor
 */
int Check_Right_Sensor(void){
    int in;
    in = RB4;
    return in;
}

/*
 * Check Left Sensor
 * Returns status of sensor
 * Returns 0 if sensor is not triggered
 * Returns 1 if sensor is triggered
 *
 * This function should read the pin attached to the sensor and return a value
 * that represents the status of the motor
 */
int Check_Left_Sensor(void){
    int in;
    in = RB2;
    return in;
}