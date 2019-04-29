#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fPointer;
    fPointer = fopen("bacon.txt","w+"); // random access file

    fputs("I eat 3 pumpkins today", fPointer); // write to file

    //-------------- SEEK_SET ------------------

    // SEEK_SET -> start at the beginning of the file
    // 7        -> move the pointer to the 7th position
    fseek(fPointer, 7, SEEK_SET);
    fputs(" munchkin on Friday", fPointer);


    //-------------- SEEK_END ------------------
    // SEEK_SET -> start at the END
    // -6       -> move 6 poistions towards the beginning
    fseek(fPointer, -6, SEEK_END);
    fputs("SAT", fPointer);

    fclose(fPointer);

    return 0;
}
