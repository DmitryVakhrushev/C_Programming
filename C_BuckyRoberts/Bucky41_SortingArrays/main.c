#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    // =========== Bubble Sort Algorithm =============
    int i, temp, swapped;
    int howMany = 10;
    int goals[howMany]; // create an empty array

    //Populate the array with random numbers
    for(i=0; i<howMany; i++){
        goals[i] = ( rand()%25 )+1;
    }

    //Print the array of random numbers
    printf("Original List\n");
    for(i=0; i<howMany; i++){
        printf("%d \n", goals[i]);
    }

    //create an infinite loop (1) is always true
    //compare the current number with the next number
    while(1){
      swapped = 0;

        for(i=0; i<howMany-1; i++){
            // swap one number with another number
            if(goals[i] > goals[i+1]){
                temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapped = 1; // if "1" the list is not sorted yet
            }
        }

        if(swapped==0){
            break; // exit the while loop
        }
    }

    // Print sorted  list
    printf("\nSorted List\n");
    for(i=0; i<howMany; i++){
        printf("%d \n", goals[i]);
    }
    return 0;
}
