#include <stdio.h>
#include <stdlib.h>

int main()
{
    //------------ Example 1 ------------
    char lastName[20];
    printf("Enter your last name \n");
    scanf(" %s", lastName);

    // if-else simplified syntax" (test) ? trueCode : fasleCode;
    (lastName[0] < 'M') ? printf("Blue Team\n") : printf("Red Team\n") ;

    //------------ Example 2 ------------
    int friends = 1;

    printf("I have %d friend%s", friends, (friends!=1) ? "s" : "" );

    return 0;
}
