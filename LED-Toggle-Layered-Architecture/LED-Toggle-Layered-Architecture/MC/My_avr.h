/*
 * My_avr.h
 *
 *  Created on: Sep 6, 2021
 *      Author: Omar
 */

#ifndef MY_AVR_H_
#define MY_AVR_H_
#include "../types.h"
// DEFINE DIRECTION REGISTERS
#define DDRA *((volatile uint8_t*)(0X3A))
#define DDRB *((volatile uint8_t*)(0X37))
#define DDRC *((volatile uint8_t*)(0X34))
#define DDRD *((volatile uint8_t*)(0X31))

// Define DATA REGISTERS
#define PORTA *((volatile uint8_t*)(0X3B))
#define PORTB *((volatile uint8_t*)(0X38))
#define PORTC *((volatile uint8_t*)(0X35))
#define PORTD *((volatile uint8_t*)(0X32))

// DEFINE STATUS REGISTERS
#define PINA *((volatile uint8_t*)(0X39))
#define PINB *((volatile uint8_t*)(0X36))
#define PINC *((volatile uint8_t*)(0X33))
#define PIND *((volatile uint8_t*)(0X30))


#endif /* MY_AVR_H_ */
