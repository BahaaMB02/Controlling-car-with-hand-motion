/*
* main.c
*
* Created: 8/27/2022 9:00:19 PM
*  Author: abdala abdelatif
*/ 


#include "Cpu_Configuration.h"
//converted value
volatile char adcValue1;
volatile char adcValue;	
	
/*
ISR(ADC_vect)           //interrupt
{
	adcValue = ADC_Read(); //getting the value
	/ *PORTC = adcValue ;* /
	switch (ADMUX)	
	{
		case 0x40 :
		if (adcValue >= 100)
		{
			UART_send_char('1');
			_delay_ms(100)    ;
			
		}
		ADMUX = 0x41 ;
		break;
		case 0x41 :
		if (adcValue >= 100)
		{
			UART_send_char('2');
			_delay_ms(100)    ;
			
		}
		ADMUX = 0x42 ;
		break;
		case 0x42 :
		if (adcValue >= 100 && adcValue <= 200)
		{
			UART_send_char('3');
			_delay_ms(100)    ;
			
		}
		ADMUX = 0x43 ;
		break;
		case 0x43 :
		if (adcValue >= 150)
		{
			UART_send_char('4');
			_delay_ms(100)    ;
			
		}
		ADMUX = 0x40 ;
		break;
			
	}
	ADCSRA |= (1 << ADSC);
		
}*/

	
int main(void)
{	/*ADC_Initilization();*/
	Uart_Initilization(9600);
	/*ADCSRA |= (1 << ADSC);*/
	/*DDRD = 0xFF ;
	DDRC = 0x01 ;
	PORTC = 0X00;
	DDRC |= 0x02;
	PORTC |=0x02;
	DDRA = 0 ;
	PORTA = 0 ;*/
	
while(1)
{
	
		adcValue1 = Uart_Recieve();
	if (adcValue1 == 'F')
	{
		DCMotor_Rotate(Motor_0,Motor_CW);
		DCMotor_Rotate(Motor_1,Motor_CW);
		/*Set_Bit(PORTC,3);
		Set_Bit(PORTC,4);*/
	}
	else if (adcValue1 == 'S')
	{
		DCMotor_Brake(Motor_0);
	
		DCMotor_Brake(Motor_1);
	}	
	else if (adcValue1 == 'B')
	{
		DCMotor_Rotate(Motor_0,Motor_CCW);
		DCMotor_Rotate(Motor_1,Motor_CCW);
	}
	else if (adcValue1 == 'L')
	{
		DCMotor_Rotate(Motor_0,Motor_CW);
		DCMotor_Brake(Motor_1);
	}
	else if (adcValue1  == 'R')
	{
		DCMotor_Rotate(Motor_1,Motor_CW);
		DCMotor_Brake(Motor_0);
	}
		
}
return 0;
}

