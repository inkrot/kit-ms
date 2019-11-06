#include <mega16.h>
void main(void) {
	int mass[10];
	int min, max; 
	int i, j;
	PORTA=0x00;
	DDRA=0x00;
	PORTB=0x00;
	DDRB=0x00;
	PORTC=0x00;
	DDRC=0xFF;
	PORTD=0x00;
	DDRD=0xFF;
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
	while (1) {
		for (i = 0; i < 10; i++) {
	        mass[i] = PINB;
	    }
	    min = mass[0];
	    max = mass[0];
	    for (j = 0; j < 10; j++) {
	    	if (min > mass[j]) {
	            min = mass[j];
	        }
	        if (max < mass[j]) {
	            max = mass[j];
	        }
	    }
	    PORTC = min;
	    PORTD = max;
    };
}
