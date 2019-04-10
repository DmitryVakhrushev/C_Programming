#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int candy[4] = {7,9,43,21};
    int meatBalls[5];
    int totalBalls = 0;

    // Read an array
    for(i=0; i<4; i++){
        printf("Element %d: %d \n", i, candy[i]);
    }

    //Populate and read an array
    for(i=0; i<5; i++){
        printf("How many meatballs did you eat on day %d \n", i+1);
        scanf(" %d", &meatBalls[i]);
        totalBalls += meatBalls[i];
    }

    int avg = totalBalls / 5;
    printf("\nYou ate %d meatballs total, that's an average of %d per day! \n", totalBalls, avg);

    return 0;
}
