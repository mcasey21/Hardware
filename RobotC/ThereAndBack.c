#pragma config(Sensor, S1,     touchSensor,    sensorEV3_Touch)
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          armMotor,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*------------------------------------------------------------------------------------------------
  This program will move your robot make a series of moves for different lengths of time.
  At the end of the program, all motors will shut down automatically and turn off.

                            ROBOT CONFIGURATION: LEGO EV3 REM Bot
    MOTORS & SENSORS:
    [I/O Port]          [Name]              [Type]                [Description]
    MotorC        	leftMotor           LEGO EV3 Motor	  Left side motor
    MotorB       	rightMotor          LEGO EV3 Motor	  Right side motor (reversed)
------------------------------------------------------------------------------------------------*/

task main()
{
	// Move forward at half power for 1.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power forward (50)
	setMotorSpeed(rightMotor, 50); 	//Set the rightMotor (motor6) to half power forward (50)
	sleep(5000);			//Wait for 1.5 seconds before continuing on in the program.

	// Stop for 1 second
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to Off
	setMotorSpeed(rightMotor, 0);  	//Set the rightMotor (motor6) to Off
	sleep(1500);			//Wait for 1 second before continuing on in the program.

	// Move reverse at half power for 1.5 seconds
	setMotorSpeed(leftMotor, 50);	//Set the leftMotor (motor1) to half power reverse (50)
	setMotorSpeed(rightMotor, 50);	//Set the rightMotor (motor6) to half power reverse (50)
	sleep(5000);			//Wait for 1.5 seconds before continuing on in the program.

}
