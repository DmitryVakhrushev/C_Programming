#include <stdio.h>
#include <stdbool.h>

int main() {
	
	int temp;
	bool pizzaIsHealthy;

	printf("Do you like pizza? 1 is true and 0 is false\n");
	scanf_s("%d", &temp);

	pizzaIsHealthy = temp;
	if (pizzaIsHealthy) {
		printf("Welcome to my pizza APP\n");
	}
}