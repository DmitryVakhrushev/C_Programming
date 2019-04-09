#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    int year1;
    int year2;
    int age;

    printf("Enter a year \n");
    scanf(" %d", &year1);

    printf("Enter another year \n");
    scanf(" %d", &year2);

    age = year1 - year2;
    printf("%d \n", age);

    age = abs(age); // eliminates the sign
    printf("%d \n", age);

    printf("%f \n", pow(5,3) ); // 5^3 = 125
    printf("%f \n", sqrt(64) ); // 164^(1/2) = 8

    return 0;
}
