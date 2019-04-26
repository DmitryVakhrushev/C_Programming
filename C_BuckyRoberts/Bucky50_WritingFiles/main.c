#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Sequential File Writing

    //w for write
    //r for read
    //a for append (add more)

    FILE *fPointer;

    fPointer = fopen("bacon.txt", "w"); // recreate a new file

    fprintf(fPointer, "I love cheese\n");

    fclose(fPointer); // free the memory

    return 0;
}
