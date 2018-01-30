/*
 * microSecDelay.c
 *
 * Created: 1/25/2018 2:37:59 PM
 * Author : cookab1
 */ 

#include <avr/io.h>

void delay_usec(unsigned int);

int main(void)
{
    while (1) 
    {
		delay_usec(1);
    }
}

