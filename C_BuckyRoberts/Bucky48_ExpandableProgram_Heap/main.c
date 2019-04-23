#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int i;
    int howMany;
    int total = 0.0;
    float average = 0.0;
    int *pointsArray;

    printf("How many numbers do you want to average?\n");
    scanf(" %d", &howMany);

    // dynamically allocate memory
    // based on how many number a user wants to average
    pointsArray = (int *) malloc(howMany * sizeof(int));

    printf("Enter them hoss! \n");

    for(i=0; i<howMany;  i++){
        scanf(" %d", &pointsArray[i]);
        total += pointsArray[i];
    }

    average = (float)total / (float)howMany;

    printf("Average is %f", average);

    // free the borrowed memory
    free(pointsArray);

    return 0;
}
