#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("Input an integer:");
    scanf("%f", &a);
    printf("Input an other integer:");
    scanf("%f", &b);
    printf("addition: %f + %f = %f\n",a, b, a+b);
    printf("substraction: %f - %f = %f\n",a, b, a-b);
    printf("multiplication: %f * %f = %f\n",a, b, a*b);
    printf("division: %f / %f = %f\n",a, b, a/b);
    printf("power: %f ^ %f = %f\n",a, b, pow(a,b));
    printf("square: sqrt(%f) = %f\n",a, sqrt(a));
    printf("square: sqrt(%f) = %f\n",b, sqrt(b));

    return(0);
}
