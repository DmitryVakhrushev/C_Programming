#include <stdio.h>
#include <stdlib.h>
// Add the following libraries
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

    int i;
    int player[5] = {58, 66, 68, 71, 87};
    int goals[5] = {26, 39, 25, 29, 31};
    int gamesPlayed[5] = {30, 30,28 , 30, 26};
    float ppg[5]; // points per game
    float bestPPG = 0.0;
    int bestPlayer;

    for(i=0; i<5; i++){
        ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
        printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

        if(ppg[i] > bestPPG){
            bestPPG = ppg[i];
            bestPlayer = player[i];
        }
    }

    printf("\nThe best palyer is %d \n", bestPlayer);

    return 0;
}
