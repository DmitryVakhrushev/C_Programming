#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char catsName[50];
    char catsFood[25];
    char sentence[75] = "";

    // "puts" automatically adds a new line
    puts("Whats the cats dumb name? "); // similar to "printf"
    gets(catsName); // similar to "scanf" but accepts spaces between words

    puts("What does he eat?");
    gets(catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);

    puts(sentence);

    return 0;
}
