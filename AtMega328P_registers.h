#ifndef _ATMEGA328P_REGISTERS_
#define _ATMEGA328P_REGISTERS_

/*Register addresses*/
#define DDRB_328P 0x24 /*The Port B Data Direction Register*/

#define PORTB_328P 0x25 /*The Port B Data Register*/

/*Register Masks*/
#define DDRB0_328P 0x01 /*The Port B Data Direction for Pin PB0*/
#define DDRB1_328P 0x02 /*The Port B Data Direction for Pin PB1*/
#define DDRB2_328P 0x04 /*The Port B Data Direction for Pin PB2*/
#define DDRB3_328P 0x08 /*The Port B Data Direction for Pin PB3*/
#define DDRB4_328P 0x10 /*The Port B Data Direction for Pin PB4*/
#define DDRB5_328P 0x20 /*The Port B Data Direction for Pin PB5*/
#define DDRB6_328P 0x40 /*The Port B Data Direction for Pin PB6*/
#define DDRB7_328P 0x80 /*The Port B Data Direction for Pin PB7*/

#define PORTB0_328P 0x01 /*The Port B Data Direction for Pin PB0*/
#define PORTB1_328P 0x02 /*The Port B Data Direction for Pin PB1*/
#define PORTB2_328P 0x04 /*The Port B Data Direction for Pin PB2*/
#define PORTB3_328P 0x08 /*The Port B Data Direction for Pin PB3*/
#define PORTB4_328P 0x10 /*The Port B Data Direction for Pin PB4*/
#define PORTB5_328P 0x20 /*The Port B Data Direction for Pin PB5*/
#define PORTB6_328P 0x40 /*The Port B Data Direction for Pin PB6*/
#define PORTB7_328P 0x80 /*The Port B Data Direction for Pin PB7*/

/*Macros for manipulating registers*/
#define WRITE_8BIT(register, value) (*(volatile uint8_t *)(register) = (value))
#define READ_8BIT(register) (*(volatile uint8_t *)(register))

#endif
