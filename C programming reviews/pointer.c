// declare pointers with asterix *
// when pointer is used without asterix, it represent the address
// when is used with *, it represent the value at this address
#include <stdio.h>

int main()
{
    char a, b, c, *p;
    a = 'A';
    p = &a;
    b = *p;
    p = &c;
    *p = 'Z';

    printf("a is %c\nb is %c\nc is %c", a, b, c);
    return(0);
}
