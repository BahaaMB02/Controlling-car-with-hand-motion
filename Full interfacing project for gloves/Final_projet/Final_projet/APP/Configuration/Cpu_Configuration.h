

#ifndef CPU_CONFIGURATION_H_
#define CPU_CONFIGURATION_H_
#define ADC_DATA (*(volatile uint16_t*) 0x24)
#define F_CPU 16000000
#include <avr/io.h>
#include "stdio.h"
#include "avr/interrupt.h"
#include <util/delay.h>
#include "bit_maths.h"
#include "Uart.h"
#include <stdlib.h>
#include "ADC.h"
#include "motor_configuration.h"
#include "motor.h"
#endif /* CPU_CONFIGURATION_H_ */