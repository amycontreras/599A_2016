void updateIntakeMotors(int fwd)
{
	motor[left_intake_motor] = fwd;
	motor[right_intake_motor] = fwd;
}

void intake()
{
	if(intakeVal > DEADZONE || intakeVal < -DEADZONE)
	{
		updateIntakeMotors(intakeVal);
	}
	else
	{
		updateIntakeMotors(0);
	}
}

void updateIntake()
{
	intake();
}
