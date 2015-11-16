//NOTE: none of this has been tested. In other words, this probably doesn't work.

void autoTest()
{
	updateDriveMotors(60, 60);
	wait1Msec(2000);
	updateDriveMotors(0, 0);
	/*
	updateFlywheelMotors(127);
	wait1Msec(3000);
	updateIntakeMotors(127);
	wait1Msec(4000);
	updateFlywheelMotors(0);
	updateIntakeMotors(0);
	*/
}
