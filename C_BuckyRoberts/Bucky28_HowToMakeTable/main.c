#include <stdio.h>
#include <stdlib.h>
// Add the following libraries for the future
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int columns;
    int rows;

    for(rows=1; rows<=6; rows++){

        for(columns=1; columns<=4; columns++){
            printf("%d ", columns);
        }

        printf("\n");
    }

    return 0;
}
