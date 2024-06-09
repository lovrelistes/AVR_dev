#ifndef _ATMEGA328P_REGISTERS_
#define _ATMEGA328P_REGISTERS_

/*The Port B Data Direction Register*/
#define DDRB_328P 0x24

#define DDRB0_328P 0x01 /*The Port B Data Direction for Pin PB0*/
#define DDRB1_328P 0x02 /*The Port B Data Direction for Pin PB1*/
#define DDRB2_328P 0x04 /*The Port B Data Direction for Pin PB2*/
#define DDRB3_328P 0x08 /*The Port B Data Direction for Pin PB3*/
#define DDRB4_328P 0x10 /*The Port B Data Direction for Pin PB4*/
#define DDRB5_328P 0x20 /*The Port B Data Direction for Pin PB5*/
#define DDRB6_328P 0x40 /*The Port B Data Direction for Pin PB6*/
#define DDRB7_328P 0x80 /*The Port B Data Direction for Pin PB7*/

/*The Port B Data Register*/
#define PORTB_328P 0x25

#define PORTB0_328P 0x01 /*The Port B Data Direction for Pin PB0*/
#define PORTB1_328P 0x02 /*The Port B Data Direction for Pin PB1*/
#define PORTB2_328P 0x04 /*The Port B Data Direction for Pin PB2*/
#define PORTB3_328P 0x08 /*The Port B Data Direction for Pin PB3*/
#define PORTB4_328P 0x10 /*The Port B Data Direction for Pin PB4*/
#define PORTB5_328P 0x20 /*The Port B Data Direction for Pin PB5*/
#define PORTB6_328P 0x40 /*The Port B Data Direction for Pin PB6*/
#define PORTB7_328P 0x80 /*The Port B Data Direction for Pin PB7*/

/*The Port D Data Register*/
#define PORTD_328P 0x2A

#define PORTD0_328P 0x01 /*The Port D Data Direction for Pin PD0*/
#define PORTD1_328P 0x02 /*The Port D Data Direction for Pin PD1*/
#define PORTD2_328P 0x04 /*The Port D Data Direction for Pin PD2*/
#define PORTD3_328P 0x08 /*The Port D Data Direction for Pin PD3*/
#define PORTD4_328P 0x10 /*The Port D Data Direction for Pin PD4*/
#define PORTD5_328P 0x20 /*The Port D Data Direction for Pin PD5*/
#define PORTD6_328P 0x40 /*The Port D Data Direction for Pin PD6*/
#define PORTD7_328P 0x80 /*The Port D Data Direction for Pin PD7*/

/*USART Control and Status Register A*/
#define UCSR0A_328P 0xC0

#define MPCM0_328P 0x01 /*Multi-processor Communication Mode*/
#define U2X0_328P 0x02  /*Double the USART Transmission Speed*/
#define UPE0_328P 0x04  /*USART Parity Error*/
#define DOR0_328P 0x08  /*Data OverRun*/
#define FE0_328P 0x10   /*Frame Error*/
#define UDRE0_328P 0x20 /*USART Data Register Empty*/
#define TXC0_328P 0x40  /*USART Transmit Complete*/
#define RXC0_328P 0x80  /*USART Receive Complete*/

/*USART Control and Status Register B*/
#define UCSR0B_328P 0xC1 /**/

#define TXB80_328P 0x01  /*Transmit Data Bit 8*/
#define RXB80_328P 0x02  /*Receive Data Bit 8*/
#define UCSZ02_328P 0x04 /*Character Size*/
#define TXEN0_328P 0x08  /*Transmitter Enable*/
#define RXEN0_328P 0x10  /*Receiver Enable*/
#define UDRIE0_328P 0x20 /*USART Data Register Empty Interrupt Enable*/
#define TXCIE0_328P 0x40 /*TX Complete Interrupt Enable*/
#define RXCIE_328P 0x80  /*RX Complete Interrupt Enable*/

/*USART Control and Status Register C*/
#define UCSR0C_328P 0xC2

#define UCPOL0_328P 0x01  /*Clock Polarity*/
#define UCSZ00_328P 0x02  /*Character Size*/
#define UCSZ01_328P 0x04  /*Character Size*/
#define USBS0_328P 0x08   /*Stop Bit Select*/
#define UPM00_328P 0x10   /*Parity Mode*/
#define UPM01_328P 0x20   /*Parity Mode*/
#define UMSEL00_328P 0x40 /*USART Mode Select*/
#define UMSEL01_328P 0x80 /*USART Mode Select*/

/*USART Baud Rate Register Low*/
#define UBRR0L_328P 0xC4

/*USART Baud Rate Register High*/
#define UBRR0H_328P 0xC5

/*USART I/O Data Register*/
#define UDR0_328P 0xC6 /**/

/*Macros for manipulating registers*/
#define WRITE_8BIT(register, value) (*(volatile uint8_t *)(register) = (value))
#define READ_8BIT(register) (*(volatile uint8_t *)(register))

#endif /*_ATMEGA328P_REGISTERS_*/
