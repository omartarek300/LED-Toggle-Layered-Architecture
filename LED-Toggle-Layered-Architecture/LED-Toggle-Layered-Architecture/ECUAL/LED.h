/*
 * LED.h
 *
 *  Created on: Sep 6, 2021
 *      Author: Omar
 */

#ifndef LED_H_
#define LED_H_
#define ON 1
#define OFF 0
#include "../MCAL/dio.h"
/****************************************************Functions Decleration****************************************/

/*******
	Function Description: this function initiates port and pin of the LED
	parameter: port_name: is the port name 
			   pin_num: is an integer number specifies the pins of the LEDs		   
	return: none
*/
void LED_init(uint8_t port_name,uint8_t pin_num);

/*******
	Function Description: this function turn on the LED
	parameter: port_name: is the port name
				pin_num: is an integer number to specify which LEDs you want to turn on
	return: none
*/
void LED_on(uint8_t port_name,uint8_t pin_num);

/*******
	Function Description: this function turn off the LED
	parameter: port_name: is the port name
				pin_num: is an integer number to specify which LEDs you want to turn off
	return: none
*/
void LED_off(uint8_t port_name,uint8_t pin_num);

/*******
	Function Description: this function toggles the LED
	parameter: none
	return: none
*/
void LED_toggle();

#endif /* LED_H_ */
