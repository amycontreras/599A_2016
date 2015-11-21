// The Macros.h file lists every global variable used in the 599A_2016 code.


//INITIATING ALL VARIABLES:

	//drive
	int DEADZONE = 10;
		// After a long system of trial and error, we set our DEADZONE
		// to 10. This value prevents random movements of the robot upon
		// accidentally moving the joystick.
	int strafeR = 0;
	int strafeL = 0;

	//intake
	int intakeVal = 0;
	int outtakeVal = 0;

	//flywheel
	int flywheelIn = 0;
	int flywheelOut = 0;
	int halfSpeedFlywheel = 0;
	int newButton = 0;
	int stopButton = 0;


// This function refreshes every variable created in this file.
void updateOI()
{
	strafeR = vexRT[Btn7R];
	strafeL = vexRT[Btn7L];

	intakeVal = vexRT[Btn5U];
	outtakeVal = vexRT[Btn5D];

	flywheelIn = vexRT[Btn6U];
	flywheelOut = vexRT[Btn6D];
	halfSpeedFlywheel = vexRT[Btn8U];
	newButton = vexRT[Btn8D];
	stopButton = vexRT[Btn8R];
}
