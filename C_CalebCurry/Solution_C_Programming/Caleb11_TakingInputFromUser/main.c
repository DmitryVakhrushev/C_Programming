
#include <stdio.h>

int main() {

	int radius; // The distance from outside to center of the circle

	printf("Please enter a radius: ");
	
	// We access the ADDRESS of the variable because we CHANGE the variable
	// %i is a conversion character means "integer"
	scanf_s("%i", &radius); 

	printf("The given radius is %i\n", radius); // here we don't change the variable but just access it

	return 0;

}