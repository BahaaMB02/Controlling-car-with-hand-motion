/*
 * ADC.c
 *
 * Created: 8/30/2022 10:29:31 PM
 *  Author: abdala abdelatif
 */ 
#include "ADC.h"
#define ADC_DATA (*(volatile uint16_t*) 0x24)

void ADC_Initilization (void){
	sei(); //enable interrupt
	
	ADCSRA |= 0b10111111;//0xA7

	
	ADMUX |= 0b01000000;//0x40
}
uint8_t ADC_Read(void)
{
	uint8_t data = 0;
	data = ADC_DATA;
	
	return data;
}