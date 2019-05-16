#include <stdio.h>
#include <stdlib.h>

//To disable the compiler warning, add to the very top of your program the following statement :
#define _CRT_SECURE_NO_WARNINGS

int main()
{

	// create a character array.
	// if we need to store 30 characters create an array of 31
	// as we need to store the "null terminator \0"

	char name[31];
	printf("Yo gurl enter yo name:\n");
	
	// we do not need to use & as it's for variables not arrays
	//scanf("%s", name);
	scanf_s("%s", name, (unsigned)_countof(name) ); // get an input from user and store in the array

	printf("Hello %s\n", "Caleb!"); // a string is a sequence of characters
	printf("Hello %s\nYou look very nice today.\n", name); // a string is a sequence of characters

	return 0;
}