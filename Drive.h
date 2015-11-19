#include "Macros.h"

// This sets the parameters left and right to all four drive
// motors. This is then used as a shortcut in the drive function
// in order to condense lines of code.
void updateDriveMotors(int left,int right)
{
	motor[front_left_drive_motor] = left;
	motor[back_left_drive_motor] = left;
	motor[front_right_drive_motor] = right;
	motor[back_right_drive_motor] = right;
}

// This is basic drive code. You check to see whether or not
// the joystick channel is greater than the DEADZONE. When
// testing this robot, replacing each item with shortened
// variables did not work. So here is everything written out
// for now, as of 11/16/2015.
void drive()
{
	int fwd;
	int spin;

	spin = vexRT[Ch1];
	fwd = vexRT[Ch3];

	if(abs(vexRT[Ch3]) > 10)
	{
		motor[front_left_drive_motor] = fwd;
		motor[back_left_drive_motor] = fwd;
		motor[front_right_drive_motor] = fwd;
		motor[back_right_drive_motor] = fwd;
	}/*
	else if(vexRT[Ch3] < -10)
	{
		motor[front_left_drive_motor] = -fwd;
		motor[back_left_drive_motor] = -fwd;
		motor[front_right_drive_motor] = -fwd;
		motor[back_right_drive_motor] = -fwd;
	}*/
	else if(abs(vexRT[Ch1]) > 10)
	{
		motor[front_left_drive_motor] = spin;
		motor[back_left_drive_motor] = spin;
		motor[front_right_drive_motor] = -spin;
		motor[back_right_drive_motor] = -spin;
	}/*
	else if(vexRT[Ch1] < -10)
	{
		motor[front_left_drive_motor] = -spin;
		motor[back_left_drive_motor] = -spin;
		motor[front_right_drive_motor] = spin;
		motor[back_right_drive_motor] = spin;
	}*/
// This is strafe code...with buttons. It lets the robot
// strafe at full speed left or right if a button is pressed.
// Kind of counter-intuitive...I'll change it soon. Anyway.
// Certain motors are reversed in order for one pair of wheels
// to be facing inwards with the other outwards. Drawing this
// out really helps the logic.
	else if(vexRT[Btn7R] == 1)
	{
		motor[front_left_drive_motor] = 63;
		motor[back_left_drive_motor] = -63;
		motor[front_right_drive_motor] = -63;
		motor[back_right_drive_motor] = 63;
	}
	else if(vexRT[Btn7L] == 1)
	{
		motor[front_left_drive_motor] = -63;
		motor[back_left_drive_motor] = 63;
		motor[front_right_drive_motor] = 63;
		motor[back_right_drive_motor] = -63;
	}
	else
	{
		motor[front_left_drive_motor] = 0;
		motor[back_left_drive_motor] = 0;
		motor[front_right_drive_motor] = 0;
		motor[back_right_drive_motor] = 0;
	}
}


void updateDrive()
{
	drive();
}
