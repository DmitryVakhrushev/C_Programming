#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    // int and char are used interchangebly

    int tuna = 'b';
    //int tuna = '9';
    tuna = '9';
    //tuna = '$';

    if( isalpha(tuna) ){
        printf("%c is a letter", tuna);
    }else{

        if( isdigit(tuna) ){
            printf("%c is a number", tuna);
        }else{
        printf("%c is OMG WTF is that?", tuna);
        }
    }
    return 0;
}
