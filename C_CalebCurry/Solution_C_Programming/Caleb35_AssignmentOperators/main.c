
#include <stdio.h>

int main() {

	int pizzasToEat = 100;
	printf("Pizzas to eat: %i\n", pizzasToEat);
	
	pizzasToEat = pizzasToEat + 100; // 1st approach
	pizzasToEat += 50; // 2nd approach: += | -= | *2 | /2 | %=

	printf("Pizzas to eat: %i\n", pizzasToEat);
	
	printf("----------------------------------------------\n");


	return 0;
}