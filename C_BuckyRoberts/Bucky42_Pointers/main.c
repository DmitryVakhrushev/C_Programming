#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    //============= Example #1 =============
    // Create an integer variable
    int tuna = 19;

    // Check what memory address is used for that variable
    printf("%p \n", &tuna); // use "%p" and "&" for that
    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);


    //============= Example #2 =============
    printf("\n-------------------------------------\n");
    // Let's create a pointer variable
    // It's a special type of variable that can hold a memory address

    // go to "tuna" => find its memory address => store it in the pointer variable "pTuna"
    int * pTuna = &tuna; // "*" defines a pointer variable

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

    return 0;
}
