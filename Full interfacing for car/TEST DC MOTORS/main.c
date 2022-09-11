/*
 * TEST DC MOTORS.c
 *
 * Created: 9/5/2022 1:58:00 PM
 * Author : LAPTOP
 */ 

#include "CPU_Configuartion.h"

	
int main(void)
{
	
		DcMotor_Initialization();
	
	DDRB |= (1<<PB3);
	DDRB |= (1<<PB4);


 
    while (1) 
    {
		if (data==1)
		{
			DCMotor_Rotate(Motor_0,Motor_CW);
			DcMotor_Brake(Motor_0);
		}
		else if (data==2)
		{
			DCMotor_Rotate(Motor_1,Motor_CW);
			DcMotor_Brake(Motor_1);
			
		}
		
		else if (data==3)
		{
			DCMotor_Rotate(Motor_0,Motor_CW);
			DCMotor_Rotate(Motor_1,Motor_CW);
			
		}
		
		else if (data==4)
		{
						DCMotor_Rotate(Motor_0,Motor_CCW);
						DCMotor_Rotate(Motor_1,Motor_CCW);
		}
		
    }
}

