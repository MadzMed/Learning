#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define MAX 100
#define MIN 1

int menu(int replay);

int main()
{
    int nombreMystere, essai = 0, replay = 0;
    int nombreEssai = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    while (nombreMystere)
    {
        printf("Find the number ?\n");
        scanf("%d", &essai);
        if(essai == nombreMystere)
        {
            printf("Congrats, you find the number with %d tries\n", nombreEssai);
            printf("Pal again?\n1: Yes\n2: No\n");
            scanf("%d", &replay);
            nombreMystere = menu(replay);

        }
        else if(essai > nombreMystere)
        {
            printf("the mystery number is smaller\n");
        }
        else
        {
            printf("the mystery number is bigger\n");
        }
        nombreEssai++;
    }

    return 0;
}

int menu(int replay)
{
    int nombreMystere;
    switch(replay)
    {
        case 1:
            printf("Here we go again !\n");
            nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
            break;
        case 2:
            printf("ohhhh ... goodbye :(\n");
            nombreMystere = 0;
            break;
        default:
            printf("what ? goodbye ...");
            nombreMystere = 0;
            break;
    }
    return nombreMystere;
}
