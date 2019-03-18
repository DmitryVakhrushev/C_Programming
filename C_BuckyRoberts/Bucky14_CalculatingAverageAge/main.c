#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Example #1
    printf("Example #1 \n");
    int a;
    int b;
    int c;

    a = b = c = 100; // assign from right to left to all variables at once
    printf("%d | %d | %d", a, b, c);

    // Example #2
    printf("\n\nExample #2 \n");
    float age1, age2, age3, average; // define variables in one line
    age1 = age2 = 4.0;

    printf("Enter your age \n");
    scanf("%f", &age3);

    average = (age1 + age2 + age3)/3;
    printf("\nThe average age of the group is %f", average);

    return 0;
}
