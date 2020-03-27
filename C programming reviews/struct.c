#include <stdio.h>
#include "struct.h"

int main()
{
    Personnage player[2];
    int i = 0;
    for(i=0; i<2; i++)
    {
        printf("Player %d\n", i+1);
        printf("first name ?\t");
        scanf("%s", player[i].firstName);
        printf("last name ?\t");
        scanf("%s", player[i].lastName);
        printf("age ?\t");
        scanf("%d", &player[i].age);
    }

    for(i = 0; i< 2; i++)
    {
        printf("player %d:\n-firstName: %s\n-lastName: %s\n-age: %d\n", i+1, player[i].firstName, player[i].lastName, player[i].age);
    }

    return 0;
}
