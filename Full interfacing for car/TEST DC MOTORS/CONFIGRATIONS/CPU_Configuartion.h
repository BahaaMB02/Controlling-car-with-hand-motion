/*
 * CPU_Configuartion.h
 *
 * Created: 6/11/2022 12:19:38 PM
 *  Author: karim
 */ 


#ifndef CPU_CONFIGUARTION_H_
#define CPU_CONFIGUARTION_H_

#undef F_CPU               // Un-define internal crystal of micro controller
#define F_CPU 16000000     // Define new crystal for micro controller
#include <avr/io.h>        // Define Input output API
#include <avr/interrupt.h> // Define interrupts for micro controller
#include <util/delay.h>    // Define delay API to micro controller*/
#include "STD_Types.h"     // Define standard types
#include "BIT_MATH.h"      // Define bit math operation
#include "DIO_Private.h"

#define N_BITS      256
#define FREQ        16
#define MICROSECOND 1000
#define PRESCALER   1024

#include "DCMotor_Configuration.h"
#include "DCMotor_Private.h"
#include "DIO_Configuration.h"
#include "DIO_Private.h"

#endif /* CPU_CONFIGUARTION_H_ */