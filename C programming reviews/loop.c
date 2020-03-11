#include <stdio.h>

int main()
{
    int i;
    int x = -10;
    printf("for loop\n");
    for(i=0;i<20;i++)
    {
        printf("%d\n", i+1);
    }
    printf("while loop\n");
    while(x<=10)
    {
        printf("%d\n", x);
        x = x + 2;
    }
    return(0);
}
