#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("bacon.txt","a"); // a -> append

    fprintf(fPointer, "\n- a hikewl by Bucky Roberts");

    fclose(fPointer);

    return 0;
}
