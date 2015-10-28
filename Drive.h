#include "Macros.h"

void updateDriveMotors(int left,int right)
{
	motor[front_left_drive_motor] = left;
	motor[back_left_drive_motor] = left;
	motor[front_right_drive_motor] = right;
	motor[back_right_drive_motor] = right;
}

void drive()
{
	//forward
	//	add if(abs(driveY) > abs(driveX)) if it doesn't turn properly?? ok
	if(driveY > DEADZONE || driveY < -DEADZONE)
	{
		updateDriveMotors(driveY, driveY);
	}
	//turn
	else if(driveX > DEADZONE || driveX < -DEADZONE)
	{
		updateDriveMotors(driveX, -driveX);
	}
	else
	{
		updateDriveMotors(0, 0);
	}
}

void updateDrive()
{
	drive();
}
// extracomment
