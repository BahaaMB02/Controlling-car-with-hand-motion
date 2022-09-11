

#include "Uart.h"
void Uart_Initilization (uint16_t Baud_Rate){
	DDRD &=~(1<<0);
	DDRD |= (1<<1);
	UCSRB |= (1<<RXEN) | (1<<TXEN);//Enable receive, transmit //USCRB = 0x18;
	UCSRC |= (1<<URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
	uint16_t UBRR_Value = ((1000000/Baud_Rate)-1);
	UBRRL = (uint8_t) UBRR_Value;
	UBRRH = (uint8_t) (UBRR_Value >> 8);
	
	
}

uint8_t Uart_Recieve (void) {
	
	while (! (UCSRA & (1 << RXC)));
	return(UDR);
	
}

void UART_send_char(char data)
{
	UDR = data;//Send data to UDR
	while(GET_BIT(UCSRA, TXC) != 1);//Wait until data transmitted, flag will raise
	
}

void UART_send_string(char *data)
{
	while(*data > 0)
	UART_send_char(*data++);
	UART_send_char('\0');
}