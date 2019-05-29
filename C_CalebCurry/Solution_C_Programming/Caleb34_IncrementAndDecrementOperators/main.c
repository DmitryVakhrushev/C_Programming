
#include <stdio.h>

int main() {

	int testValue = 123;

	testValue = testValue + 5; //
	testValue++; // adding 1 and change the variable
	printf("testValue: %i\n", testValue);
	printf("----------------------------------------------\n");

	int pizzasToEat = 100;
	printf("Pizzas to eat: %i\n", pizzasToEat);
	int output = pizzasToEat++; // assigns 100 to "output" and adds 1 to "pizzasToEat"
	printf("Pizzas to eat after (pizzasToEat++): %i\n", pizzasToEat);
	printf("output after (output = pizzasToEat++) : %i\n\n", output);
	printf("----------------------------------------------\n");
	
	pizzasToEat = 20;
	printf("Pizzas to eat: %i\n", pizzasToEat);
	output = ++pizzasToEat; // assigns 100 to "output" and adds 1 to "pizzasToEat"
	printf("Pizzas to eat after (++pizzasToEat): %i\n", pizzasToEat);
	printf("output after (output = ++pizzasToEat) : %i\n", output);
	printf("----------------------------------------------\n");

	return 0;
}