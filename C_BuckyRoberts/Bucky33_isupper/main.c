#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    int tuna = 'B';

    if( isupper(tuna) ){
        printf("%c is an UPPER case letter", tuna);
    }else{
        printf("%c is a Lower case letter", tuna);
    }

    return 0;
}
