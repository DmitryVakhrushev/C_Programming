#include <stdio.h>
#include <stdlib.h>

int main()
{
    // >, >=, <, <=, ==, !=

    //----------------------------
    // Example 1
    if(4 < 10) // true statement
    {
        printf("Easy hoss!\n");
    }

    if(4 > 10) // false statement
    {
        printf("meatball\n");
    }

    //----------------------------
    // Example 2
    int age;
    printf("How old are you? \n");
    scanf("%d", &age);

    if(age >= 18){
        printf("You may enter this website!");
    }

    if(age < 18){
        printf("Nothing to see here!");
    }

    return 0;
}
