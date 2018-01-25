/*
 * microSecDelay.c
 *
 * Created: 1/25/2018 2:37:59 PM
 * Author : cookab1
 */ 

#include <avr/io.h>


int main(void)
{
	
	DDRB = 0x80;
	
    while (1) 
    {
		PORTB ^= 0x80; 
    }
}

