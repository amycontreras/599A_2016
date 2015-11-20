#include "Macros.h"

void updateDriveMotors(int left, int right)
{
		motor[front_left_drive_motor] = left;
		motor[back_left_drive_motor] = left;
		motor[front_right_drive_motor] = right;
		motor[back_right_drive_motor] = right;
}

// This is basic drive code. You check to see whether or not
// the joystick channel is greater than the DEADZONE (see Macros.h)
void drive()
{
	int fwd;
	int spin;

	spin = vexRT[Ch1];
	fwd = vexRT[Ch3];

	// This if statement drives forward and backwards.
	// The absolute value accounts for any negatives of the
	// joystick position in order to eliminate writing
	// extra code for a "negative" DEADZONE (-DEADZONE).
	if(abs(fwd) > DEADZONE)
	{
		motor[front_left_drive_motor] = fwd;
		motor[back_left_drive_motor] = fwd;
		motor[front_right_drive_motor] = fwd;
		motor[back_right_drive_motor] = fwd;
	}
	// This statement turns left and right. In order for a robot to
	// turn, the motors on the side of the turning direction must be
	// reversed. i.e. to turn right, the right motors must be running
	// in the opposite direction.
	else if(abs(spin) > DEADZONE)
	{
		motor[front_left_drive_motor] = spin;
		motor[back_left_drive_motor] = spin;
		motor[front_right_drive_motor] = -spin;
		motor[back_right_drive_motor] = -spin;

	}
	// This lets the robot strafe at half speed, left or right if a
	// button is pressed. Certain motors are reversed in order for
	// one pair of wheels to be facing inwards with the other outwards.
	// See diagram. The two variables, strafeR and strafeL, stand for
	// buttons 7R and 7L respectively.
	else if(strafeR == 1)
	{
		motor[front_left_drive_motor] = 63;
		motor[back_left_drive_motor] = -63;
		motor[front_right_drive_motor] = -63;
		motor[back_right_drive_motor] = 63;
	}
	else if(strafeL == 1)
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
