#include <stdio.h>
#include <stdlib.h>

#define SIZE 64
int main()
{
    char *str;
    str = malloc(sizeof(char)*SIZE);
    if(str == NULL)
    {
        printf("unable to allocate memory");
        return(1);
    }
    printf("your name:");
    fgets(str,SIZE,stdin);
    printf("hello %s\n", str);
    return(0);
}
