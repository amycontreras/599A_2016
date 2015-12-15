void autoTest()
{
	// start flywheel
	updateFlywheelMotors(60);
	// drive forward for 5 seconds
	updateDriveMotors(-127, -127);
	wait1Msec(5000);
	// drive reverse for .4 seconds then stop
	updateDriveMotors(127, 127);
	wait1Msec(400);
	updateDriveMotors(0, 0);
	// ball one
	updateIntakeMotors(127);
	wait1Msec(200);
	updateIntakeMotors(0);
	wait1Msec(200);
	// ball two
	updateIntakeMotors(127);
	wait1Msec(1500);
	updateIntakeMotors(0);
	wait1Msec(2200);
	// ball three
	updateIntakeMotors(127);
	wait1Msec(1500);
	updateIntakeMotors(0);
	wait1Msec(2500);
	// drive forward for .4 seconds then stop
	updateDriveMotors(-127, -127);
	wait1Msec(400);
	updateDriveMotors(0, 0);
	updateFlywheelMotors(0);
}
