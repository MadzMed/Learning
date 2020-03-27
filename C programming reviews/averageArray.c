#include <stdio.h>

double averageArray(int array[], int lengthArray);

int main(int argc, char *argv[])
{
    int i = 0, array[5] = {1, 2, 3, 4, 5};
    double average = averageArray(array, 5);

    printf("%f", average);
    return 0;
}

double averageArray(int array[], int lengthArray)
{
    int i = 0;
    double sum = 0;
    for(i=0; i<lengthArray; i++)
    {
        sum += array[i];
    }
    return sum/lengthArray;
}
