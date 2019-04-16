#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int tuna = 19;
    int *pTuna = &tuna; // create a pointer to "tuna" variable

    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %p \n", &pTuna, "pTuna", pTuna);

    // Use "*" to get the value of the variable the pointer refers to
    // So we can access the variable VALUE by
        // (1) referencing the variable (variable name)
        // (2) referncing its pointer (* pointer name)
    printf("\n*pTuna: %d \n", *pTuna);

    *pTuna = 71; // asign a new value
    printf("\n*pTuna: %d \n", *pTuna); // get the var value via the pointer
    printf("\ntuna: %d \n", tuna); // get the var value directly from the var

    return 0;
}
