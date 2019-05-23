
#define _CRT_SECURE_NO_WARNINGS //To disable the compiler warning add "before the #include lines"
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Conversion Characters
	----------------------------
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides what notation to use
		if the exponent is < -4 or > 5 than scientific else decimal
	*/

	double dogs = 2.5e4; //25,000 = 2.5*10^4
	printf("%f\n%e\n%g\n", dogs, dogs, dogs);

	dogs = 2.5e6;
	printf("%f\n%e\n%g\n\n", dogs, dogs, dogs);

	// Get the input from user
	printf("How many dogs do you have?: ");
	scanf("%lf", &dogs); // %lf - for scanning a DOUBLE
	printf("%f\n%e\n%g", dogs, dogs, dogs);

	return 0;
}