/*
 * microSecDelay.c
 *
 * Created: 1/25/2018 2:37:59 PM
 * Author : cookab1
 */ 

#include <avr/io.h>

int add2(int, int);

volatile int result;

int main(void)
{
	result = add2(7,8);
	
    while (1) 
    {
		
    }
}

