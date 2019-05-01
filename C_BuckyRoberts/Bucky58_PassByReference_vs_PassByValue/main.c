#include <stdio.h>
#include <stdlib.h>

// Prototype the functions
void passByValue(int i);
void passByAddress(int *i); // memory address

int main()
{
    int tuna = 20;

    passByValue(tuna);
    printf("Passing by Value, tuna is now %d\n", tuna);

    passByAddress(&tuna);
    printf("Passing by Address, tuna is now %d\n", tuna);

    return 0;
}

//---------- User Defined Functions ----------
void passByValue(int i){
    i = 99;
    return;
}

// passing the memory address of that variable
void passByAddress(int *i){
    *i = 64;
    return;
}
