#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avgProfit;
    int priceOfPumpkin = 10;
    int sales = 59;
    int daysWorked = 7;

    // temporarily changing the data type
    avgProfit = ( (float)priceOfPumpkin * (float)sales ) / (float)daysWorked;

    printf("Average daily profit: $%.2f \n", avgProfit);

    return 0;
}
