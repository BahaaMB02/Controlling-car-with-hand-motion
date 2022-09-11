

#include "Cpu_Configuration.h"

	volatile uint8_t data;
	
int main(void)
{
	Uart_Initilization(9600);
	DcMotor_Initialization();
	
	DDRD = 0xFF ;
	DDRC = 0xff ;
			
			DDRB |= (1<<3);
			DDRB |= (1<<4);
	
while(1)
{
	data = Uart_Recieve();
	
	if (data==1)
	{   /*to make the car rotate RIGHT*/
		
		DCMotor_Rotate(Motor_0,Motor_CW); 
		DcMotor_Brake(Motor_0);
	}
	else if (data==2)
	{
		/*to make the car rotate LEFT*/
		
		DCMotor_Rotate(Motor_1,Motor_CW); 
		DcMotor_Brake(Motor_1);
		
	}
	
	else if (data==3)
	{
		/*to move FORWARD*/
		
		DCMotor_Rotate(Motor_0,Motor_CW);  
		DCMotor_Rotate(Motor_1,Motor_CW);
		
	}
	
	else if (data==4)
	{
		/*to get BACK*/
		
		DCMotor_Rotate(Motor_0,Motor_CCW); 
		DCMotor_Rotate(Motor_1,Motor_CCW);
	}
			
		}
		
		return 0;
	}	
		


