#include <stdio.h>

// prototypes function ! dn't forget semi-colon
int test(int x);
// void function return nothing

int main()
{
    printf("%d", test(5));
}

int test(int x)
{
    return(x);
}
