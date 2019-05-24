
#define _CRT_SECURE_NO_WARNINGS //To disable the compiler warning add "before the #include lines"
#include <stdio.h>

int main() {

	char myChar = 'A';
	printf("%c\n", myChar);

	scanf("%c", &myChar);
	printf("%c\n", myChar);

	return 0;
}