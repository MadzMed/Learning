#include <stdio.h>

int main()
{
    int a;
    float b;
    char c[64];
    char d[32];
    double e;
    struct f {
        int ni;
        float pi;
        char str[16];

    } g;
    puts("memory size variables:");
    printf("memory size of int: %lu\n", sizeof(a));
    printf("memory size of float: %d\n", sizeof(b));
    printf("memory size of char(64): %d\n", sizeof(c));
    printf("memory size of char(32): %d\n", sizeof(d));
    printf("memory size of double: %d\n", sizeof(e));
    printf("memory size of struct: %d", sizeof(g));

    puts("\nlocation variables:");
    printf("int a located at: %d\n", &a);
    printf("float b located at: %d\n", &b);
    printf("char c(64) located at: %d\n", &c);
    printf("char c(32) a located at: %d\n", &d);
    printf("double e located at: %d\n", &e);
    printf("struct g located at: %d\n", &g);
    return(0);
}
