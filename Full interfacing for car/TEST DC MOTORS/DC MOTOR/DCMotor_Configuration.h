/*
* DCMotor_Configuration.h
*
* Created: 7/23/2022 12:00:22 PM
*  Author: karim
*/


#ifndef DCMOTOR_CONFIGURATION_H_
#define DCMOTOR_CONFIGURATION_H_

#include "CPU_Configuartion.h"

#define Motor_CNTRL_PRT  DIO_PORTB
#define Motor_DATA_PRT   DIO_PORTC

#define Motor_EN1 DIO_PIN3
#define Motor_EN2 DIO_PIN4

#define Motor_A1  DIO_PIN3
#define Motor_A2  DIO_PIN4
#define Motor_B1  DIO_PIN5
#define Motor_B2  DIO_PIN6

#define Motor_OUTPUT  DIO_OUTPUT

#define Motor_LOW  DIO_LOW
#define Motor_HIGH DIO_HIGH

typedef enum
{
	Motor_CW = 0,
	Motor_CCW = 1
}Motor_Direction;

typedef enum
{
	Motor_0 = 0,
	Motor_1 = 1
}Motor;

#endif /* DCMOTOR_CONFIGURATION_H_ */