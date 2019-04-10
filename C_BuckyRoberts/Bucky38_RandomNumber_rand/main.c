#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int diceRoll;

    //--------- Example #1 ---------
    for(i=0; i<5; i++){
        printf("%d \n", rand() ); // default from 0-32768 (2^15)
    }

    printf("----------------------------\n");
    //--------- Example #2 ---------
    for(i=0; i<10; i++){
        diceRoll = ( rand() %6 ) + 1; // a reminder produces the numbers 0-5
        printf("%d \n", diceRoll ); // default from 0-32768 (2^15)
    }

    return 0;
}
