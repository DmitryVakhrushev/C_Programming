
#include <stdio.h>

int main() {

	// implicit type conversion - promotion

	float x = 50.0;

	// use %f for both float and double
	printf("%f", x); // print takes a double

	return 0;
}