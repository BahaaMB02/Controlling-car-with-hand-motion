/*
 * Uart.h
 *
 * Created: 8/27/2022 10:09:14 PM
 *  Author: abdala abdelatif
 */ 


#ifndef UART_H_
#define UART_H_
#include "Cpu_Configuration.h"
void Uart_Initilization (uint16_t Baud_Rate);
uint8_t Uart_Recieve (void);
void UART_send_char(char data);
void UART_send_string(char *data);

#endif /* UART_H_ */