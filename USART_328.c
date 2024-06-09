
#include "USART_328P.h"
#include "AtMega328P_registers.h"
#include "Bit_Manipulation_Macros.h"
#include <util/setbaud.h>

void initUSART(void)
{
    /*Set baud rate */
    WRITE_8BIT(UBRR0H_328P, UBBRH_VALUE_328P);
    WRITE_8BIT(UBRR0L_328P, UBBRL_VALUE_328P);
    /* Enable USART transmitter/receiver */
    WRITE_8BIT(UCSR0B_328P, TXEN0_328P | RXEN0_328P);
    WRITE_8BIT(UCSR0C_328P, UCSZ01_328P | UCSZ00_328P);
}

void transmitUSART(uint8_t data)
{
    /* Wait for empty transmit buffer */
    while (!(READ_8BIT(UCSR0A_328P) & BIT_IS_SET(UCSR0A_328P, 5)))
        ;
    /* Put data into buffer, sends the data */
    WRITE_8BIT(UDR0_328P, data);
}

uint8_t receiveUSART(void)
{
    /* Wait for data to be received */
    while (!(READ_8BIT(UCSR0A_328P) & BIT_IS_SET(UCSR0A_328P, 7)))
        ;
    /* Get and return received data from buffer */
    return READ_8BIT(UDR0_328P);
}