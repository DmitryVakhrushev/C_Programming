#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    char movie[20];
    char *pMovie = movie;

    fgets(pMovie, 20, stdin); // cut of what the exceed over 20 chars

    puts(pMovie);

    return 0;
}
