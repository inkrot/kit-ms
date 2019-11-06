#include <mega16.h> 
#include <delay.h> 
#include <math.h>
void main(void)
{
	int input;
	PORTA=0x00;
	DDRA=0x00;
	PORTB=0x00;
	DDRB=0xFF;
	PORTC=0x00;
	DDRC=0x00;
	PORTD=0x00;
	DDRD=0x00;
	TCCR0=0x00;
	TCNT0=0x00;
	OCR0=0x00;
	TCCR1A=0x00;
	TCCR1B=0x00;
	TCNT1H=0x00;
	TCNT1L=0x00;
	ICR1H=0x00;
	ICR1L=0x00;
	OCR1AH=0x00;
	OCR1AL=0x00;
	OCR1BH=0x00;
	OCR1BL=0x00;
	ASSR=0x00;
	TCCR2=0x00;
	TCNT2=0x00;
	OCR2=0x00;
	MCUCR=0x00;
	MCUCSR=0x00;
	TIMSK=0x00;
	ACSR=0x80;
	SFIOR=0x00;    
	input = PINC;
	while (1)
	{
		PORTB = pow(2, input);
	    delay_ms(50);
	    PORTB = 0;
	    delay_ms(50);
	};
}
