#include <stdio.h>
#include <stdlib.h>

// prototyping functions
void printSomething();

// This is a "main" function (mandatory)
int main()
{
    printf("Hello world!\n");

    printSomething();
    printSomething();
    printSomething();

    return 0;
}

//-------------------------------------
// This is another function we created
// "void" doesn't return anything back

void printSomething(){

    printf("durr I'm a function\n");

    return; // every function needs "return" statement
}
