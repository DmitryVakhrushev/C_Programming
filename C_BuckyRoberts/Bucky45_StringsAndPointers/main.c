#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    char movie1[] = "The Return of Buckyman!";
    //movie1 = "zzz"; <= this will NOT work
    // the pointer "movie1" is the "CONSTANT"
    puts(movie1);

    // Now let's create a Pointer Variable
    char *movie2 = "Bucky is awesome I love ham!";
    puts(movie2); // print it to the screen
    //store the address where the string begins

    movie2 = "New movie title";
    puts(movie2);

    return 0;
}
