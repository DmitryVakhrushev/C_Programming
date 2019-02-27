#include <stdio.h>
#include <stdlib.h>

int main()
{
    // How much memory will the string need?
    // "Bucky Roberts" // 13 charatcters + 1 string terminator = 14 bytes
    char name [14] = "Bucky Roberts";
    printf("My name is %s \n", name);

    // Replace a letter "c" to "z"
    name [2] = 'z';
    printf("My name is %s \n", name);

    // Intialize an array and make the compiler define the array size
    char food[] = "tuna";
    printf("The best food is %s \n", food);

    // Replace the array value by another value
    strcpy(food, "bacon"); // provide an array name and the new value to hold
    printf("The best food %s \n", food);

    return 0;
}
