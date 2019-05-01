#include <stdio.h>
#include <stdlib.h>

// Prototype the function
int calculateBonus(int yearsWorked);

int main()
{
    int buckysBonus = calculateBonus(14);
    int emmasBonus = calculateBonus(3);

    printf("Bucky gets $%d\n", buckysBonus);
    printf("Emma gets $%d\n", emmasBonus);

    return 0;
}

//---------- User Defined Functions ----------
int calculateBonus(int yearsWorked){

    int bonus = yearsWorked * 250;

    if(yearsWorked > 10){
        bonus += 1000;
    }

    return bonus;
}
