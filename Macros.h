//drive
int DEADZONE = 15;
int driveY = 0;
int driveX = 0;

//intake
int intakeVal = 0;

void updateOI()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch4];

	intakeVal = vexRT[Ch1];
}

