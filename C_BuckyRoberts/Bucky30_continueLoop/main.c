#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int num=1;

    do{
        // line1
        // skip the loop action for 6 and 8
        if(num==6 || num==8){
            num++;
            continue; // go to line1
        }
        printf("%d is available \n", num);
        num++;

    }while(num<=10);

    return 0;
}
