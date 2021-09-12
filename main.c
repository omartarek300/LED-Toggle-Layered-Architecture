/*
 * LED.c
 *
 * Created: 9/6/2021 2:16:00 AM
 * Author : Omar
 */ 

#include "ECUAL/LED.h"
#include "ECUAL/Button.h"

int main(void)
{
    LED_init();
	Button_init();
	
    while (1) 
    {
		if(Button_read())
		{
			
			LED_toggle();
			
		}
    }
}

