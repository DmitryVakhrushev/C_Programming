#include <stdio.h>
#include <stdlib.h>
// Add the following libraries for the future
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int bacon;

    printf("============= Example #1 =============\n");
    for(bacon=1; bacon<=10; bacon++){
        printf("Bacon is %d \n", bacon);
    }


    printf("============= Example #2 =============\n");
    for(bacon=0; bacon<=100; bacon+=8){
        printf("Bacon is %d \n", bacon);
    }

    return 0;
}
