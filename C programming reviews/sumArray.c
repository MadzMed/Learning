#include <stdio.h>

int sumArray(int array[], int lengthArray);

int main(int argc, char *argv[])
{
    int i = 0, array[5] = {1, 2, 3, 4, 5};
    int sum = sumArray(array, 5);

    printf("%d", sum);
    return 0;
}

int sumArray(int array[], int lengthArray)
{
    int i = 0, sum = 0;
    for(i = 0; i< lengthArray; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}

