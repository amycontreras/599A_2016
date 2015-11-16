#pragma config(Motor,  port1,           left_intake_motor, tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           front_right_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           front_left_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           back_left_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           back_right_drive_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           bottom_right_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           top_right_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           bottom_left_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           top_left_motor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right_intake_motor, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"

// Don't forget to include all other files from the code. Notice
// that the Macros.h file isn't included. This is because it has
// already been included in the Drive.h file...and the Drive.h
// file is already here. Therefore it doesn't have to be included
// twice. Nice.
#include "Drive.h"
#include "Manip.h"
#include "Auto.h"

// Premade function. Used to set things before auto code.
// i.e. Resetting encoders.
void pre_auton()
{

	bStopTasksBetweenModes = true;

}

// This is where the autonomous code goes.
task autonomous()
{
	autoTest();
}

task usercontrol()
{

	while (true)
	{
		// This is where you put all those update files you created!
		// Yay!
		updateOI();
		updateIntake();
		updateDrive();
	}
}
