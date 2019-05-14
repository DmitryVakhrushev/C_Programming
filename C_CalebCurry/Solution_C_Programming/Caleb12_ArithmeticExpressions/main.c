
#include <stdio.h>

int main() {

	int radius; // The distance from outside to center of the circle

	printf("Please enter a radius: ");

	//----- Getting Input from User ------
	// We access the ADDRESS of the variable because we CHANGE the variable
	scanf_s("%i", &radius); 	// %i is a conversion character means "integer"

	double area = 3.14159 * (radius * radius);

	printf("The area of circle with %i radius is %f\n", radius, area);


	return 0;
}