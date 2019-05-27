
#include <stdio.h>
#include <stdbool.h>

int main() {

	// _Bool
	_Bool catIsFat = 9001; // any number other than 0 will be converted to 1

	// Standard "bool" data type (requires #include <stdbool.h>)
	// can use "true" or "false" instead of numbers
	bool calebIsFat = true;
	printf("Is Caleb Fat (1 is yes, 0 is no? %i\n", calebIsFat);

	// can add number to boolean variable as it works as a number
	printf("%i\n", calebIsFat + 10);

	return 0;
}