
#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *heures, int *minutes);

int main(int argc, char *argv[])
{
    int heures = 0, minutes = 90;
    int *pointH = &heures, *pointMin = &minutes;


    decoupeMinutes(pointH, pointMin);

    printf("%d heures et %d minutes", heures, minutes);

    return 0;
}

void decoupeMinutes(int *pointH, int *pointMin)
{
    *pointH = *pointMin / 60;  // 90 / 60 = 1
    *pointMin = *pointMin % 60; // 90 % 60 = 30
}
