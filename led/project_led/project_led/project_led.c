/*
 * project_led.c
 *
 * Created: 5/3/2024 11:03:50 AM
 *  Author: elsawah
 */ 


#include <avr/io.h> 
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LED.h"
int main(void)
{
    led_init('A',0);
    while(1)
    {
		led_toggle('A',0);
		_delay_ms(1000);
		
    }
}