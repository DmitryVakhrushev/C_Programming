// .h means header
// <> means to search in the default directory
#include <stdio.h> // Standard Input/Output. Includes printf
#include <stdlib.h>

#include "BuckysInfo.h" // "" means from the current project

//define substitutes all MYNAME and then compiles
#define TEST "Tuna McButter"

int main()
{
    printf("My name is %s \n", TEST);

    printf("My name is %s \n", MYNAME);

    int girlsAge = (AGE / 2) + 7;
    printf("%s can date girls %d or older \n", MYNAME, girlsAge);

    return 0;
}
