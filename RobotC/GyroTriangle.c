#pragma config(Sensor, S2,     Gyro,           sensorEV3_Gyro)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void triangle(long nMotorRatio,long dist, long power);
float distanceInDegrees(int dist);
void turn90();
void turn100();
void turn120();
task main()
{

	int cm = 0;
	int totalcm;
	totalcm = 360/172.8;
	cm = totalcm*10;
	float distance = 0;


	while (getButtonPress(buttonEnter) == 0) // waiting for enter button to be pressed
	{	displayCenteredBigTextLine(3,"Up is 8 cm");
		displayCenteredBigTextLine(5,"Down is 12 cm");
		displayCenteredBigTextLine(7,"L or R is 16cm");
		wait1Msec(200);



		if (getButtonPress(buttonUp))
		{
			distance = 8;
			triangle(0,distance,10);
			turn120();

		}
		else if (getButtonPress(buttonDown))
		{
			distance = 12;
			triangle(0,distance,10);
			turn120();

		}
		else if (getButtonPress(buttonLeft))
		{
			distance = 16;
			triangle(0,distance,10);
			turn120();

		}
		else if (getButtonPress(buttonRight) || getButtonPress(buttonLeft))
		{
			distance = 18;
			triangle(0,distance,10);
			turn120();

		}
	}


}

void triangle(long nMotorRatio,long dist, long power)
{
	float degreesToTurn = 0;
	degreesToTurn = distanceInDegrees(dist);


	for (int i = 0; i < 1; i++)
	{
		setMotorSyncEncoder(motorB, motorC, nMotorRatio, degreesToTurn, power);
		waitUntilMotorStop(motorB);
		waitUntilMotorStop(motorC);
		wait1Msec(1000);
		turn90();
	}
	setMotorSyncEncoder(motorB, motorC, nMotorRatio, degreesToTurn, power);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	wait1Msec(1000);
	turn100();
	setMotorSyncEncoder(motorB, motorC, nMotorRatio, degreesToTurn, power);
	waitUntilMotorStop(motorB);
	waitUntilMotorStop(motorC);
	wait1Msec(1000);




}

float distanceInDegrees(int dist)
{
	float totalcm = 360.0 / 172.8;
	int cm = totalcm * 10.0;

	dist = dist * cm;

	return dist;
}

void turn90() {
	int Angle;
	wait1Msec(1000);
	resetGyro(S2);
	wait1Msec(1000);
	setMotorSync(motorB, motorC, -100, 20);

	while (abs(getGyroDegrees(S2)) <= 120) {
		sleep(1);
		Angle = getGyroDegrees(S2);
		displayCenteredBigTextLine(3, "current angle %d", Angle);
	}

	playTone(440, 10);
	setMotorSync(motorB, motorC, 0, 0); // stop the motors
	wait1Msec(1000); // Allow sensor to settle
}

void turn100() {
	int Angle;
	wait1Msec(1000);
	resetGyro(S2);
	wait1Msec(1000);
	setMotorSync(motorB, motorC, -100, 20);

	while (abs(getGyroDegrees(S2)) <= 100) {
		sleep(1);
		Angle = getGyroDegrees(S2);
		displayCenteredBigTextLine(3, "current angle %d", Angle);
	}

	playTone(440, 10);
	setMotorSync(motorB, motorC, 0, 0); // stop the motors
	wait1Msec(1000); // Allow sensor to settle
}

void turn120() {
	int Angle;
	wait1Msec(1000);
	resetGyro(S2);
	wait1Msec(1000);
	setMotorSync(motorB, motorC, -100, 20);

	while (abs(getGyroDegrees(S2)) <= 120) {
		sleep(1);
		Angle = getGyroDegrees(S2);
		displayCenteredBigTextLine(3, "current angle %d", Angle);
	}

	playTone(440, 10);
	setMotorSync(motorB, motorC, 0, 0); // stop the motors
	wait1Msec(1000); // Allow sensor to settle
}
