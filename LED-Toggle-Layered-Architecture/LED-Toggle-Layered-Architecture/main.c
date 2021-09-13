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
    LED_init(PA,pin1);
	Button_init(PC,pin0);
	
    while (1) 
    {
		if(Button_read(PC,pin0))
		{
			if(Button_read(PC,pin0))
			{
				LED_toggle();
			}
			
		}
    }
}

