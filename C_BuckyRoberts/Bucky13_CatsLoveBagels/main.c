#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 4 + 2 * 6; // Order of operation
    printf("Result: %d \n", a); // result = 16

    a = (4 + 2) * 6; // use () to prioritize
    printf("Result: %d \n", a); // result = 36

    return 0;
}
