#include <stdio.h>

int main()
{
    int choice= 0;

    printf("=================\n");
    printf("1: Royal Cheese\n2: Mc Deluxe\n3: Mc Bacon\n4: Big Mac\n Votre choix?\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("vous avez choisi Royal Cheese\n");
            break;
        case 2:
            printf("vous avez choisi Mc Deluxe\n");
            break;
        case 3:
            printf("vous avez choisi Mc Bacon\n");
            break;
        case 4:
            printf("Vous avez choisi Big Mac\n");
            break;
        default:
            printf("je n'ai pas compris votre choix\n");
    }

    return 0;
}
