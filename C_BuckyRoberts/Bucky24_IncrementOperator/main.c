#include <stdio.h>
#include <stdlib.h>

int main()
{

    int tuna = 20;
    printf("%d\n", tuna);

    tuna++;
    printf("%d\n", tuna);

    ++tuna;
    printf("%d\n", tuna);

    tuna--;
    printf("%d\n", tuna);

    int a = 5, b = 10, answer = 0;
    // add 1 to a prior to calculate the equation
    answer = ++a * b; // a is changed to 6 first and then used in the calculation
    printf("Answer: %d\n", answer);

    a = 5, b = 10, answer = 0;
    // change a after the calculation
    answer = a++ * b; // a=5 is used here and after the calculation is changed to 6
    printf("Answer: %d\n", answer);

    return 0;
}
