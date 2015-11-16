// This function sets the motors for the intake system. They are all at
// the same power because they run in the same direction.
void updateIntakeMotors(int fwd)
{
	motor[left_intake_motor] = fwd;
	motor[right_intake_motor] = fwd;
}

// Since the intake is accessed by buttons, it takes a simple value of 1
// to see if it is pressed. The motors are then set at full speed if the
// button is pressed. All variables (intakeVal and outtakeVal) are made
// in the Macros.h file. They're just set to the button channels.
void intake()
{
	if(intakeVal == 1)
	{
		updateIntakeMotors(127);
	}
	else
	{
		if(outtakeVal == 1)
		{
			updateIntakeMotors(-127);
		}
		else
		{
			updateIntakeMotors(0);
		}
	}
}

// This function assigns the Flywheel motors to the same power. Some
// are reversed due to the formation of the motors.
void updateFlywheelMotors(int fwd)
{
	motor[top_right_motor] = -fwd;
	motor[top_left_motor] = fwd;
	motor[bottom_left_motor] = fwd;
	motor[bottom_right_motor] = -fwd;
}

// This has the variable halfSpeedFlywheel (made in the Macros.h file)
// move all Flywheel motors at half the max speed if pressed. The max
// is mainly 127, so having it at 63 lowers the power of the shot in
// order to be able to shoot with less force at a closer distance.
void flywheel()
{
	if(halfSpeedFlywheel)
	{
		if(halfSpeedFlywheel == 1)
		{
			updateFlywheelMotors(63);
		}
	}
	else
	{
// This is the basic button code for the Flywheel. This function lets
// all four wheels move in the same direction at max speed. The variables
// flywheelIn and flywheelOut are both button channels assigned in the
// Macros.h file.
		if(flywheelIn == 1)
		{
			updateFlywheelMotors(127);
		}
		else if(flywheelOut == 1)
		{
			updateFlywheelMotors(-127);
		}
		else
		{
			updateFlywheelMotors(0);
		}
	}
}


// Having an update file refreshes the actual code for the robot.
// This function contains all functions from the specified file,
// and then this function is placed in the while(true) loop in
// the Main.c file in order to constantly update and access the
// code.
void updateIntake()
{
	intake();
	flywheel();
}
