/*
 * DCMotor_Private.h
 *
 * Created: 7/23/2022 12:00:36 PM
 *  Author: karim
 */ 


#ifndef DCMOTOR_PRIVATE_H_
#define DCMOTOR_PRIVATE_H_

#include "DCMotor_Configuration.h"

void DcMotor_Initialization(void);
void DCMotor_Rotate(Motor motor, Motor_Direction direction);
void DcMotor_Brake(Motor motor);



#endif /* DCMOTOR_PRIVATE_H_ */