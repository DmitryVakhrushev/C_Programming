#include <stdio.h>

int main()
{
	/* 
		precision - how much data a variable can hold
		float and doable have a floating point
		double is more precise that float
			but doubles take up twice as much space (they are more precise)

		%i - conversion for integers
		%f - conversion for both doubles and floats

		floating point numbers are stored in "scientific notation"
			24,000 = 2.4 * 10^4
			0.000045 = 4.5 * 10^-5
	*/

	//------------ Example #1 ------------
	printf("%i %f %f\n", 1, 1111.1111, 1111.1111F); // "F" explicitly specifies the float
	
	// Numbers are stored in binary (base 2)
	// Therefore more complex number may have discripincies
    // Result: 1 | 1111.111100 | 1111.111084

	//------------ Example #2 ------------
	// Hardcoded Scientific Notation
	int dogs = 2.5e4; //25,000 = 2.5*10^4
	printf("%i\n", dogs);

	return 0;
}