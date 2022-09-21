/*
 * motor.h
 *
 * Created: 9/7/2022 4:54:15 PM
 *  Author: abdal
 */ 

#include "Cpu_Configuration.h"

#ifndef MOTOR_H_
#define MOTOR_H_


void DcMotor_Initialization(void); // for the initialization
void DCMotor_Rotate(Motor motor, Motor_Direction direction); // for the direction of the motor
void DCMotor_Brake(Motor motor); // to stop the motor



#endif /* MOTOR_H_ */