
#include <stdio.h>

int main() {

	int x = 10;
	int y = x / 2;

	// We can't just print a number
	// We need first to format a string for the output
	printf("%i\n", 9001); // %i - integers

	printf("The value of x is %i\nThe magic number is: %i\n", x, y); // %i - integers


	return 0;
}