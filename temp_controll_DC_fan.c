/*
 * temp_controll_DC_fan.c
 *
 * Created: 28-03-2017 13:28:55
 *  Author: RISHABH JAIN
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "adc.h"
#include "lcd_4b.h"


int main(void)
{
	DDRD=0xFF;
	DDRB=0xFE;
	PORTB=0x01;
	ADMUX|=(1<<REFS0)|(1<<REFS1);
	signed int result, resultf;
	char ar[10];
	lcd_init(LCD_DISP_ON_CURSOR);
	TCCR1A=0x81;
	TCCR1B=0x09;
	ICR1=1024;
    while(1)
    {
		result = adc_init();
		result = result/4;
		sprintf(ar,"%d",result);
		_delay_ms(10);
		
		lcd_puts("TEMPERATURE IS:");
		lcd_gotoxy(1,1);
		lcd_puts(ar);
		lcd_puts("(C)");
		resultf = (result*1.8)+32;
		sprintf(ar,"%d",resultf);
		_delay_ms(10);
		
		lcd_gotoxy(8,1);
		lcd_puts(ar);
		lcd_puts("(F)");
		_delay_ms(1000);
		
		if(bit_is_clear(PINB,PB0))
		{
			OCR1A= result + 150;
		}
		else
		{
			OCR1A=0;
		}
		_delay_ms(5000);
		lcd_clrscr();
	}
}
