void updateIntakeMotors(int fwd)
{
	motor[left_intake_motor] = fwd;
	motor[right_intake_motor] = fwd;
}

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


void updateFlywheelMotors(int fwd)
{
	motor[top_right_motor] = -fwd;
	motor[top_left_motor] = fwd;
	motor[bottom_left_motor] = fwd;
	motor[bottom_right_motor] = -fwd;
}



void flywheel()
{
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

void updateIntake()
{
	intake();
	flywheel();
}
