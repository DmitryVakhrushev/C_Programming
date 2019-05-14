# include <stdio.h>

int main() {

	printf("The number of eggs for the day: ");
	
	int eggs;
	scanf_s("%i", &eggs); // Use "&" to point to the address as we are changing the value

	double dozen = (double)eggs / 12; // type casting. Or you can make 12 -> 12.0

	printf("You have %f dozen eggs.\n", dozen);

	return 0;
}