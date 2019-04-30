#include <stdio.h>
#include <stdlib.h>

void printSomething(); // prototyping functions

int warts = 23; // Global -> if outside the function

int main()
{
    //int warts = 23; // Local -> if inside the function

    printf("I have %d warts\n", warts);

    printSomething();

    return 0;
}

//-------------------------------------
// This is another function we created
// "void" doesn't return anything back

void printSomething(){
    printf("I have %d warts\n", warts);
    return; // every function needs a "return" statement
}
