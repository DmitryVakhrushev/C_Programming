#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
    char grade = 'B';

    switch(grade){
        case 'A' : printf("Great work!\n");
            break; // stop testing further
        case 'B' : printf("Try harder\n");
            break;
        case 'C' : printf("Study more\n");
            break;
        case 'D' : printf("You love the D\n");
            break;
        case 'F' : printf("That's embarassing\n");
            break;

        default : printf("That doesn't make sense!!!\n");
    }

    return 0;
}
