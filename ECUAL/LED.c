/*
 * LED.c
 *
 *  Created on: Sep 6, 2021
 *      Author: Omar
 */
#include "LED.h"

void LED_init()
{
	DIO_init(PA, 0X01);
}
void LED_on()
{
	DIO_set(PA,0X01);
}
void LED_off()
{
	DIO_reset(PA,0X01);
}
void LED_toggle()
{
	volatile static uint8_t state = OFF;
	if(state == ON)
	{
		LED_off();
		state = OFF;
	}
	else if(state == OFF)
	{
		LED_on();
		state = ON;
	}
}



