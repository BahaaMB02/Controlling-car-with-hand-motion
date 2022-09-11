/*
* DIO_Configuration.h
*
* Created: 6/10/2022 11:09:57 AM
*  Author: karim
*/


#ifndef DIO_CONFIGURATION_H_
#define DIO_CONFIGURATION_H_

#include "CPU_Configuartion.h"
//#include "DIO_Address.h"

// New data-type for pins of micro controllers
typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
}DIO_Pin;
// New data-type for ports of micro controller
typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_Port;
//New data-type for state of micro controller
typedef enum
{
	DIO_INPUT = 0,
	DIO_OUTPUT = 1
}DIO_State;
//New data-type for status of micro controller
typedef enum
{
	DIO_LOW = 0,
	DIO_HIGH = 1
}DIO_Status;

#endif /* DIO_CONFIGURATION_H_ */