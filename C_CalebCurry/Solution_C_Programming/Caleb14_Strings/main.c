// In case of the error C4996: 'scanf': This function or variable may be unsafe.
//To disable the compiler warning, add "before the #include lines"
// https://stackoverflow.com/questions/30577519/error-c4996-scanf-this-function-or-variable-may-be-unsafe-in-c-programming
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main()
{
	// create a character array.
	// if we need to store 30 characters create an array of 31
	// as we need an extra character to store the "null terminator \0"

	char name[31];
	printf("Yo gurl enter yo name:\n");
	
	// get an input from user and store in the array
	// scanf is depricated. Use scanf_s instead
	scanf("%s", name); // we do not need to use & as it's for variables not arrays

	//scanf_s("%s", name, (unsigned)_countof(name) ); // scanf_s requires #include <stdlib.h>

	printf("Hello %s\n", "Caleb!"); // a string is a sequence of characters
	printf("Hello %s! You look very nice today!!!\n", name); // a string is a sequence of characters

	return 0;
}