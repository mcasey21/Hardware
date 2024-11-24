/*    This is a sample Program
      Use File->Load C Prog to
      load a different Program
*/



task main()
{
	int count=0;
	int x1 = 0;
	int y1 = 0;
	int i = 0;
	int leftMotor = 1;
	int rightMotor = 2;
	
	y1 = 1;
	x1 = 3;
	
	setMotorSpeed(motorC,10);
	setMotorSpeed(motorB,0);
	sleep(3700);	
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,0);	
	sleep(2000);
	
	for(i = 0; i < 6; i++)
	{
		y1++;
		playSound(soundBeepBeep);
		displayTextLine(4,"Position : %d , %d" , x1 , y1);
		setMotorSpeed(motorB,30);
		setMotorSpeed(motorC,30);
		sleep(800);
		
	}
	
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,0);
	sleep(2000);
	
	
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,25);
	sleep(1500);
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,0);	
	sleep(5000);
	playTone(500, 5000);
	
	setMotorSpeed(leftMotor,-25);
	setMotorSpeed(rightMotor,25);
	sleep(1800);
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,0);
	
	for(i = 0; i < 2; i ++)
	{
		x1--;
		displayTextLine(4,"Position : %d , %d" , x1 , y1);
		setMotorSpeed(motorB,30);
		setMotorSpeed(motorC,30);
		sleep(1100);
		
	}
	setMotorSpeed(motorC,10);
	setMotorSpeed(motorB,0);
	sleep(3700);	
	setMotorSpeed(motorC,0);
	setMotorSpeed(motorB,0);	
	sleep(2000);
	
	
	for(i = 0; i < 6; i++)
	{
		y1--;
		playSound(soundBeepBeep);
		displayTextLine(4,"Position : %d , %d" , x1 , y1);
		setMotorSpeed(motorB,30);
		setMotorSpeed(motorC,30);
		sleep(800);
		
	}
}







