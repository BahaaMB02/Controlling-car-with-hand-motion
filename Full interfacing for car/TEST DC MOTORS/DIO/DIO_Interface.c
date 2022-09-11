/*
* DIO_Interface.c
*
* Created: 6/10/2022 11:10:15 AM
*  Author: karim
*/

#include "DIO_Private.h"


void DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_State state)
{
	switch(state)
	{
		case DIO_INPUT:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(DDRD, pin);
			break;
		}
		break;
		case DIO_OUTPUT:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(DDRA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(DDRB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(DDRC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(DDRD, pin);
			break;
		}
		break;
	}
}
void DIO_SetPin_Value(DIO_Port port, DIO_Pin pin, DIO_Status status)
{
	switch(status)
	{
		case DIO_LOW:
		switch (port)
		{
			case DIO_PORTA:
			CLR_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			CLR_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			CLR_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			CLR_BIT(PORTD, pin);
			break;
		}
		break;
		case DIO_HIGH:
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
		}
		break;
	}
}
uint8_t DIO_GetPin_Value(DIO_Port port, DIO_Pin pin)
{
	uint8_t values = 0;
	switch (port)
	{
		case DIO_PORTA:
		values = GET_BIT(PINA, pin);
		break;
		case DIO_PORTB:
		values = GET_BIT(PINB, pin);
		break;
		case DIO_PORTC:
		values = GET_BIT(PINC, pin);
		break;
		case DIO_PORTD:
		values = GET_BIT(PIND, pin);
		break;
	}
	return values;
}
void DIO_TogglePin_Direction(DIO_Port port, DIO_Pin pin)
{
	switch (port)
	{
		case DIO_PORTA:
		TGL_BIT(PORTA, pin);
		break;
		case DIO_PORTB:
		TGL_BIT(PORTB, pin);
		break;
		case DIO_PORTC:
		TGL_BIT(PORTC, pin);
		break;
		case DIO_PORTD:
		TGL_BIT(PORTD, pin);
		break;
	}
}
void DIO_SetPin_PullUp(DIO_Port port, DIO_Pin pin)
{
		switch (port)
		{
			case DIO_PORTA:
			SET_BIT(PORTA, pin);
			break;
			case DIO_PORTB:
			SET_BIT(PORTB, pin);
			break;
			case DIO_PORTC:
			SET_BIT(PORTC, pin);
			break;
			case DIO_PORTD:
			SET_BIT(PORTD, pin);
			break;
		}
}