
#include <stdio.h>

int main() {

	int x = 2 + 3 * 4 / (3 - 2); // Operator Precedance
	printf("The result is %i\n", x);
								 
	// Modulus operator - remainder (integers)
	int piecesOfPizza = 5;
	int numberOfEaters = 2;
	int leftOver = piecesOfPizza % numberOfEaters;
	printf("The result is %i\n", leftOver);

	// Odd number has a remainder "1" => 17 % 2 = 1, 18 % 2 = 0

	return 0;
}