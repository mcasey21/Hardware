#pragma config(Sensor, S2,     Gyro,           sensorEV3_Gyro, modeEV3Gyro_Rate)
#pragma config(Motor,  motorB,          motorLeft,     tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
Gyro modes
0 - modeEV3Gyro_Angle
1 - modeEV3Gyro_Rate
2 - modeEV3Gyro_Fast
3 - modeEV3Gyro_RateAndAngle
4 - modeEV3Gyro_Calibration - Not utilized
*/

task main()
{

	int gyroRate = 0;
	SensorType[S2] = sensorEV3_Gyro;
	displayBigTextLine(1,"Lab Demo GyroThrottle");   // Useful command but not required

	sleep(1000);
	resetGyro(S2);
	sleep(2000);

	while (true)
	{
		setMotorSpeed(motorA,10);

		while(getGyroDegrees(Gyro) < 50)
		{
			displayBigTextLine(5,"value = %d", getGyroDegrees(Gyro));

			setMotorSync(motorB,motorC,0,getGyroDegrees(Gyro) + 50);
			wait1Msec(11);


		}

		setMotorSpeed(motorA,-10);

		while(getGyroDegrees(Gyro) > -50)
		{
			displayBigTextLine(5,"value = %d", getGyroDegrees(Gyro));

			setMotorSync(motorB,motorC,0,getGyroDegrees(Gyro) + 50);
			wait1Msec(11);


		}


	}

	}