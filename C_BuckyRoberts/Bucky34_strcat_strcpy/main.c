#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    //------- Example #1 -------
    // Convert to Upper case
    char a = 'a';
    char b = 'F';
    char c = '7';
    printf("%c \n", toupper(a) ); //UPPER case
    printf("%c \n", toupper(b) );
    printf("%c \n", toupper(c) );

    //------- Example #2 -------
    // Appending to a current string
    char ham[100] = "Hey "; // should have enough space

    strcat(ham, "Bucky "); // adding a string to string
    printf("%s \n", ham);

    strcat(ham, "you ");
    strcat(ham, "smell! ");

    printf("%s \n", ham);

    //------- Example #3 -------
    // Replace one string with another string

    strcpy(ham, "Bucky is Awesome"); // replace completely
    printf("%s \n", ham);

    return 0;
}
