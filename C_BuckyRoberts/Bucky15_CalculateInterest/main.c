#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pageViews = 0;
    pageViews = pageViews + 1;
    printf("Page Views: %d \n", pageViews);

    pageViews = pageViews + 1;
    printf("Page Views: %d \n", pageViews);

    pageViews = pageViews + 1;
    printf("Page Views: %d \n", pageViews);

    float balance = 1000.00;
    balance *= 1.1; // multiply the balance by 1.1 and assign back to balance
    printf("Page Views: %f \n", balance);

    balance *= 1.1;
    printf("Page Views: %f \n", balance);

    return 0;
}
