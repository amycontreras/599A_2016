//drive
int DEADZONE = 10;
int driveY = 0;
int driveX = 0;
int strafeR = 0;
int strafeL = 0;
int halfSpeedFlywheel = 0;

//intake
int intakeVal = 0;
int outtakeVal = 0;

int flywheelIn = 0;
int flywheelOut = 0;


void updateOI()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch1];
	strafeR = vexRT[Btn7R];
	strafeL = vexRT[Btn7L];

	intakeVal = vexRT[Btn5U];
	outtakeVal = vexRT[Btn5D];

	flywheelIn = vexRT[Btn6U];
	flywheelOut = vexRT[Btn6D];
	halfSpeedFlywheel = vexRT[Btn8U];
}
