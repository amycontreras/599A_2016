// This function sets the motors for the intake system. They are all at
// the same power because they run in the same direction.
void updateIntakeMotors(int fwd)
{
	motor[left_intake_motor] = fwd;
	motor[right_intake_motor] = fwd;
}

// Since the intake is accessed by buttons, it takes a simple value of 1
// to see if it is pressed. The motors are then set at full speed if the
// button is pressed. Two different buttons are set for taking in balls
// (spinning forwards), and taking out balls (spinning in reverse).
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
// motors are reversed due to their formation on the robot.
void updateFlywheelMotors(int fwd)
{
	motor[top_right_motor] = -fwd;
	motor[top_left_motor] = fwd;
	motor[bottom_left_motor] = fwd;
	motor[bottom_right_motor] = -fwd;
}

void flywheel()
{
	// The variable halfSpeedFlywheel moves all Flywheel motors at half
	// the max speed if pressed. The maximum is 127, so having it at 63
	// lowers the power of the shot in order to be able to shoot with
	// less force at a closer distance.
	if(halfSpeedFlywheel == 1)
	{
		updateFlywheelMotors(60);
	}
	else if(stopButton == 1)
	{
		updateFlywheelMotors(0);
	}
	else if(newButton)
	{
		if(newButton == 1)
		{
			updateDriveMotors(127, 127);
			wait1Msec(400);
			updateDriveMotors(0, 0);
		}
		// This statement lets all four Flywheel motors move at max speed,
		// whether forwards or reverse in order to intake or outtake balls.
		else if(flywheelIn == 1)
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


// This refreshes the code for the robot. It consists of every
// other function created in this file. That said, functions in
// the Manipulator file are compiled into updateIntake(), and
// is then placed in the while(true) loop in the Main.c file.
void updateIntake()
{
intake();
flywheel();
}
