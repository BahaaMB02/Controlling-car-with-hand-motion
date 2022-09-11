/*
 * DIO_Private.h
 *
 * Created: 6/10/2022 11:10:06 AM
 *  Author: karim
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#include "DIO_Configuration.h"

void DIO_SetPin_Direction(DIO_Port port, DIO_Pin pin, DIO_State state);

void DIO_SetPin_Value(DIO_Port port, DIO_Pin pin, DIO_Status status);

uint8_t DIO_GetPin_Value(DIO_Port port, DIO_Pin pin);

void DIO_TogglePin_Direction(DIO_Port port, DIO_Pin pin);

void DIO_SetPin_PullUp(DIO_Port port, DIO_Pin pin);

#endif /* DIO_PRIVATE_H_ */