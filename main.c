/*
 * motor3.c
 *
 * Created: 3/29/2019 10:11:03 AM
 * Author : Javed
 */ 

#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>


int main(void)
{
	char x=PINC,y=PIND;
	DDRA=0X03;
	DDRC=0X00;
	DDRB=0X03;
	DDRD=0X00;
   
    while (1) 
    {
		if ((x&0x00==0x00)&&(y&0x01==0x01))
		{
			PORTA=0x00;
			PORTB=0x01;
		}
		else if ((x&0x01==0x01)&&(y&0x01==0x01))
		{
			PORTA=0x01;
			PORTB=0x01;
		}
		else if ((x&0x01==0x01)&&(y&0x00==0x00))
		{
			PORTA=0x01;
			PORTB=0x00;
		}
		
	}
}
