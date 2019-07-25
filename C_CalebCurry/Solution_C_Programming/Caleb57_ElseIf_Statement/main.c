//Doctor's office App Menu:
//----------------------------
//1. Add a patient
//2. View a patient
//3. Search patients
//4. Exit

#include <stdio.h>

int main()
{
	printf("Choose a menu option 1-4:\n");
	printf("1. Add a patient\n");
	printf("2. View a patient\n");
	printf("3. Search patients\n");
	printf("4. Exit\n");

	int input;
	scanf_s("%d", &input);

	if (input == 1)
	{
		printf("Adding a patient\n");
	}
	else if (input == 2)
	{
		printf("Viewing a patient\n");
	}

	else if (input == 3)
	{
		printf("Searching patients\n");
	}

	else if (input == 4)
	{
		printf("Exiting...\n");
	}

	else
	{
		printf("Incorrect input\n");
	}

	return 0;
}