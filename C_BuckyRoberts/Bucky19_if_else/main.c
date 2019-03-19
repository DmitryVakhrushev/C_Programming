#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf("How old are you? \n");
    scanf(" %d", &age); // add a space inside "" for scanf

    printf("What is your gender? (m/f) \n");
    scanf(" %c", &gender); // add a space inside "" for scanf

    if(age >= 18){
        printf("You may enter this website ");

        if(gender == 'm'){
                printf("dude");
        }else{
            printf("m'lady");
            }
    }else{
        printf("Nothing to see here!");
        }

    return 0;
}
