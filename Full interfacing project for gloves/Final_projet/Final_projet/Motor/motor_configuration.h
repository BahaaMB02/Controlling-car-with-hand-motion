

#include "Cpu_Configuration.h"

#ifndef MOTOR_CONFIGURATION_H_
#define MOTOR_CONFIGURATION_H_


#define Motor_CNTRL_PRT  PORTB
#define Motor_DATA_PRT   PORTC

#define Motor_EN1 3
#define Motor_EN2 4

#define Motor_A1  3
#define Motor_A2  4
#define Motor_B1  5
#define Motor_B2  6

#define Motor_OUTPUT  1

#define Motor_LOW  0
#define Motor_HIGH 1

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




#endif /* MOTOR_CONFIGURATION_H_ */