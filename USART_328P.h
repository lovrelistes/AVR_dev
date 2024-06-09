#ifndef _USART_328P_
#define _USART_328P_

#include "AtMega328P_registers.h"

#ifndef BAUD      /* if not defined in Makefile... */
#define BAUD 9600 /* set a safe default baud rate */
#endif

#define COMPUTE_UBBR_VALUE_328P ((F_CPU) / (16UL * (BAUD)) - 1UL)

#define UBBRL_VALUE_328P (uint8_t) COMPUTE_UBBR_VALUE_328P
#define UBBRH_VALUE_328P (uint8_t)(COMPUTE_UBBR_VALUE_328P >> 8)

/* Takes the defined BAUD and F_CPU,
   calculates the bit-clock multiplier,
   and configures the hardware USART */
void initUSART(void);

/* Blocking transmit and receive functions.
   When you call receiveUSART(), program will hang until
   data comes through.*/
void transmitUSART(uint8_t data);

uint8_t receiveUSART(void);

#endif /*_USART_328P_*/