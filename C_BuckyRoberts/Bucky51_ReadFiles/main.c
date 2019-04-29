#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fPointer;
    fPointer = fopen("bacon.txt","r");

    // Print the file line by line
    char singeLine[150];

    // Read till the "End of File Pointer"
    while(!feof(fPointer)){
        fgets(singeLine, 150, fPointer);
        //puts(singeLine);
        printf(singeLine);
    }

    fclose(fPointer);

    return 0;
}
