
#include <stdio.h>

int main() {

	int money = 25;
	int bill = 15;
	int total = money - (-bill); // "unary minus" 25 - -15 = 25 + 15 = 40

	printf("%i\n", total);
	printf("%i\n", bill); // the original value is NOT changed

	return 0;
}