/*
 * motor.h
 *
 * Created: 9/7/2022 4:54:15 PM
 *  Author: abdal
 */ 

#include "Cpu_Configuration.h"

#ifndef MOTOR_H_
#define MOTOR_H_


void DcMotor_Initialization(void);
void DCMotor_Rotate(Motor motor, Motor_Direction direction);
void DCMotor_Brake(Motor motor);



#endif /* MOTOR_H_ */