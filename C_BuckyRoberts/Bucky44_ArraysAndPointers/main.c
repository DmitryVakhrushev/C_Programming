#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int meatBalls[5] = {7,9,43,21,3};

    // Headers
    printf("Element \t Address \t Value \n");

    // Print array values and the corresponding memory addresses
    for(i=0; i<5; i++){
        printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
    }

    // For every array the Array Name is a pointer to the first element of that array
    // So we don't need to use an "&" as "meatBalls" is already a memory address
    printf("\nmeatBalls \t\t %p \n", meatBalls);

    printf("\n(meatBalls+2) \t\t %p \n", (meatBalls+2)); // the third memory address in the array


    // We can dereference "*" this pointer to get the value
    printf("\n*meatBalls \t\t %d \n", *meatBalls);

    printf("\n*(meatBalls+2) \t\t %d \n", *(meatBalls+2));

    return 0;
}
