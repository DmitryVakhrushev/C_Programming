
#define _CRT_SECURE_NO_WARNINGS //To disable the compiler warning add "before the #include lines"
#include <stdio.h>

int main() {

	char ASCII = 'A';
	printf("%c\n", ASCII);

	printf("Enter a character: ");
	scanf("%c", &ASCII);
	printf("%c\n", ASCII); // convert to character
	printf("%i\n", ASCII); // convert to ASCII code 'A' -> 65

	//---------------------
	int integer;
	printf("Enter an integer between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);

	// Math with ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(9) = %c(%d)\n", mathz, mathz);

	return 0;
}