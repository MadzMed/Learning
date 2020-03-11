#include <stdio.h>

int main()
{
    int a;
    printf("choose 1,2 or 3:");
    scanf("%d", &a);

    if(a == 1)
    {
        printf("Red\n");
    }
    else if(a == 2)
    {
        printf("Green\n");
    }
    else if(a == 3)
    {
        printf("Blue\n");
    }
    else
    {
        printf("invalid input\n");
    }
    /*switch(a)
    {
        case 1:
            printf("Red\n");
            break;
        case 2:
            printf("Green\n");
            break;
        case 3:
            printf("Blue\n");
            break;
        default:
            printf("invalid input\n");
    }*/
    return(0);
}
