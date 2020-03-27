#include <stdio.h>

void copy(int originalArray[], int copyArray[], int lengthArray);

int main(int argc, char *argv[])
{
    int i = 0, array[5] = {1, 2, 3, 4, 5}, copyArray[5] = {0};
    copy(array, copyArray, 5);
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", copyArray[i]);
    }
    return 0;
}

void copy(int originalArray[], int copyArray[], int lengthArray)
{
    int i = 0;
    for(i = 0; i < lengthArray; i++)
    {
        *(copyArray + i) = originalArray[i];
    }
}
