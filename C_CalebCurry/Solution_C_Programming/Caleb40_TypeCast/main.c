
#include <stdio.h>

int main() {

	int slices = 17;
	int people = 2;

	// Two fix to fix that
	// 1) Add .0 to a constant
	// 2) Explicit type casting
		
	double halfThePizza = (double)slices / people;

	printf("%f\n", halfThePizza); // print takes a double

	halfThePizza = (double) (slices / people);
	printf("%f\n", halfThePizza); // print takes a double

	double c = 25 / 2 * 2;
	double d = 25 / 2 * 2.0;

	printf("c: %f\n", c);
	printf("d: %f\n", d);

	return 0;
}