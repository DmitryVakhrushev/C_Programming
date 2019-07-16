
//The user has to guess a number from 0 - 5
//Output whether or not the person is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int maxValue = 5;
	srand(time(NULL)); //Pseudo random number generator. This gets seeded from the clock.
	int randomNumber = rand() % (maxValue + 1); //modulus operator % - remainder is between 0 and 5

	//printf("%d\n", randomNumber);

	printf("Guess a number 0 - %d: ", maxValue);

	int userInput;
	scanf_s("%d", &userInput);

	if (userInput == randomNumber)
	{
		printf("You win!\n");
	}
	else
	{
		printf("You don't win! Try again!\n");
	}

	printf("The number was %d\n", randomNumber);

	return 0;
}