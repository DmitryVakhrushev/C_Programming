/*
 * ATmega8A_04_TurnOnLED.c
 * Created: 05/21/2019 4:26:35 PM
 * Author : dvakhru
 */ 

#include <avr/io.h> // adding a library (dvakhru)


int main(void)
{
    
	/*
	DDR - Direct Data Register (DDRB, DDRC, DDRC)
	Direction: 0 - in, 1 - out
	0b - binary representation, 0x - 16x representation
	*/
	
	// Set port direction (in or out)
	DDRC = 0b0000001; // set the PC0 = "out". (Port "C" has 7 bits)
	DDRB = 0b10001001; // set the PB0, PB3, PB7 = "out". (Port "B" has 8 bits)
	
	// Set port voltage (+5V)
	PORTC = 0b0000001; // set +5V for PC0
	
	while (1) // always true condition
    {
		// your code here
		
    }
}

