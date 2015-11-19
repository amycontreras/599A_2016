#include "Macros.h"

// This is basic drive code. You check to see whether or not
// the joystick channel is greater than the DEADZONE, a value
// of 10 (set in the Macros.h file) that prevents random
// movements upon accidentally jolting the controller. When
// testing this robot, replacing each item with shortened
// variables did not work.
void drive()
{
	int fwd;
	int spin;

	spin = vexRT[Ch1];
	fwd = vexRT[Ch3];

	if(abs(vexRT[Ch3]) > DEADZONE)
	{
		motor[front_left_drive_motor] = fwd;
		motor[back_left_drive_motor] = fwd;
		motor[front_right_drive_motor] = fwd;
		motor[back_right_drive_motor] = fwd;
	}
	else if(abs(vexRT[Ch1]) > DEADZONE)
	{
		motor[front_left_drive_motor] = spin;
		motor[back_left_drive_motor] = spin;
		motor[front_right_drive_motor] = -spin;
		motor[back_right_drive_motor] = -spin;

	}
// This is strafe code...with buttons. It lets the robot
// strafe at full speed left or right if a button is pressed.
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
