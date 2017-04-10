/*
 * adc.c
 *
 * Created: 04-05-2016 13:09:14
 *  Author: RISHABH JAIN
 */ 


#include<avr/io.h>
#include "adc.h"
#include<util/delay.h>

int adc_init()
{
	ADCSRA|=(1<<ADEN);
	ADCSRA|=(1<<ADSC);
	ADCSRA|=(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	
	while((ADCSRA & (1<<ADIF))==0);
	return ADC;
}