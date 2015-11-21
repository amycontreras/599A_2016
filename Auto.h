//YAY IT DRIVES FOrward

void autoTest()
{
	updateFlywheelMotors(60);
	updateDriveMotors(-127, -127);
	wait1Msec(5000);
/*
	motor[front_left_drive_motor] = -63;
	motor[back_left_drive_motor] = 63;
	motor[front_right_drive_motor] = 63;
	motor[back_right_drive_motor] = -63;

	wait1Msec(300);

	motor[front_left_drive_motor] = 0;
	motor[back_left_drive_motor] = 0;
	motor[front_right_drive_motor] = 0;
	motor[back_right_drive_motor] = 0;
*/
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
	// drive fwd
	updateDriveMotors(-127, -127);
	wait1Msec(400);
	updateDriveMotors(0, 0);
	updateFlywheelMotors(0);
}
