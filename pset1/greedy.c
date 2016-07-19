#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    float changeFloat;

    do {
        printf("How much change is owed?\n");
        changeFloat = GetFloat();
    }
    while (changeFloat <= .00);
    
    int change = roundf(changeFloat * 100);
    int numCoins = 0;
        
    do {
        if (change >= 25){
            change-=25;
        } else if (change >=10){
            change-=10;
        } else if (change >= 5){
            change-=5;
        } else {
            change-=1;
        }
        numCoins++;
    }
    while (change > 0);
    
    printf("%i\n", numCoins);
}