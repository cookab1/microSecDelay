
/*
 * microSecDelay.s
 *
 * Created: 1/25/2018 2:53:16 PM
 *  Author: cookab1
 */ 

		.text
		.global add2
		.global add8
add2:
		add r24, r22
		adc r25, r23
		ret

add8:
		ret