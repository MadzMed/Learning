#include <stdio.h>

void maxArray(int array[], int lengthArray, int maxValue);

int main(int argc, char *argv[])
{
    int i = 0, array[5] = {1, 2, 3, 4, 5};
    maxArray(array, 5, 3);
    for(i = 0; i<5; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}

void maxArray(int array[], int lengthArray, int maxValue)
{
    int i = 0;
    for(i =0; i< lengthArray; i++)
    {
        if(array[i] > maxValue)
        {
            array[i] = 0;
        }
    }
}
