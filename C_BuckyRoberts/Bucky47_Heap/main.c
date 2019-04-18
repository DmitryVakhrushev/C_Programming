#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    char movie[20]; // reserves a particular space (not flexible)

    // The Heap is an EXTRA memory that you can borrow from the system

    int *points;

    // malloc() allocates memory from the heap (in bytes)
    // reserve space for 5 integers and treat this as type pointer
    points = (int *) malloc(5 * sizeof(int));

    // return the borrowed memory back to the system
    free(points);

    return 0;
}
