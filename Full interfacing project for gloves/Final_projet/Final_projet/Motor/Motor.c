
#include "motor.h"
#include "motor_configuration.h"
void DcMotor_Initialization(void)
{
	Set_Bit(DDRB , Motor_EN1);
	Set_Bit(DDRB , Motor_EN2);
	
	
	
	Set_Bit(Motor_DATA_PRT,Motor_A1);
	Set_Bit(Motor_DATA_PRT,Motor_A2);
	Set_Bit(Motor_DATA_PRT,Motor_B1);
	Set_Bit(Motor_DATA_PRT,Motor_B2);
	
	
}

void DCMotor_Rotate(Motor motor, Motor_Direction direction)
{
	switch(motor)
	{
		case Motor_0:
		Set_Bit(PORTB, Motor_EN1);
		switch(direction)
		{
			case Motor_CW:
			Set_Bit(PORTC, Motor_A1);
			Clr_Bit(PORTC, Motor_A2);
			break;
			case Motor_CCW:
			Clr_Bit(PORTC, Motor_A1);
			Set_Bit(PORTC, Motor_A2);
			break;
		}
		break;
		case Motor_1:
		Set_Bit(PORTB, Motor_EN2);
		switch(direction)
		{
			case Motor_CW:
			Set_Bit(PORTC, Motor_B1);
			Clr_Bit(PORTC, Motor_B2);
			break;
			case Motor_CCW:
			Clr_Bit(PORTC, Motor_B1);
			Set_Bit(PORTC, Motor_B2);
			break;
		}
		break;
	}
}

void DcMotor_Brake(Motor motor)
{
	switch(motor)
	{
		case Motor_0:
		Clr_Bit(PORTC, Motor_A1);
		Clr_Bit(PORTC, Motor_A2);
		break;
		case Motor_1:
		Clr_Bit(PORTC, Motor_B1);
		Clr_Bit(PORTC, Motor_B2);
		break;
	}
}