/*
* DCMotor_Interface.c
*
* Created: 7/23/2022 12:00:48 PM
*  Author: karim
*/


#include "DCMotor_Private.h"


void DcMotor_Initialization(void)
{
	DIO_SetPin_Direction(Motor_CNTRL_PRT, Motor_EN1, Motor_OUTPUT);
	DIO_SetPin_Direction(Motor_CNTRL_PRT, Motor_EN2, Motor_OUTPUT);
	
	DIO_SetPin_Direction(Motor_DATA_PRT, Motor_A1, Motor_OUTPUT);
	DIO_SetPin_Direction(Motor_DATA_PRT, Motor_A2, Motor_OUTPUT);
	DIO_SetPin_Direction(Motor_DATA_PRT, Motor_B1, Motor_OUTPUT);
	DIO_SetPin_Direction(Motor_DATA_PRT, Motor_B2, Motor_OUTPUT);
}
void DCMotor_Rotate(Motor motor, Motor_Direction direction)
{
	switch(motor)
	{
		case Motor_0:
		DIO_SetPin_Value(Motor_CNTRL_PRT, Motor_EN1, Motor_HIGH);
		switch(direction)
		{
			case Motor_CW:
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_A1, Motor_HIGH);
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_A2, Motor_LOW);
			break;
			case Motor_CCW:
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_A1, Motor_LOW);
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_A2, Motor_HIGH);
			break;
		}
		break;
		case Motor_1:
		DIO_SetPin_Value(Motor_CNTRL_PRT, Motor_EN2, Motor_HIGH);
		switch(direction)
		{
			case Motor_CW:
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_B1, Motor_HIGH);
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_B2, Motor_LOW);
			break;
			case Motor_CCW:
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_B1, Motor_LOW);
			DIO_SetPin_Value(Motor_DATA_PRT, Motor_B2, Motor_HIGH);
			break;
		}
		break;
	}
}
void DCMotor_Brake(Motor motor)
{
	switch(motor)
	{
		case Motor_0:
		DIO_SetPin_Value(Motor_DATA_PRT, Motor_A1, Motor_LOW);
		DIO_SetPin_Value(Motor_DATA_PRT, Motor_A2, Motor_LOW);
		break;
		case Motor_1:
		DIO_SetPin_Value(Motor_DATA_PRT, Motor_B1, Motor_LOW);
		DIO_SetPin_Value(Motor_DATA_PRT, Motor_B2, Motor_LOW);
		break;
	}
}