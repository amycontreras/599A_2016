//drive
int DEADZONE = 15;
int driveY = 0;
int driveX = 0;
int strafe = 0;

//intake
int intakeVal = 0;
int outtakeVal = 0;

int flywheelIn = 0;
int flywheelOut = 0;

void updateOI()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch4];
	strafe = vexRT[Ch1];

	intakeVal = vexRT[Btn5U];
	outtakeVal = vexRT[Btn5D];

	flywheelIn = vexRT[Btn6U];
	flywheelOut = vexRT[Btn6D];
}
