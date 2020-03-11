#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char firstName[32];
    char lastName[32];
    char buffer[64];

    printf("firstName?\n");
    fgets(firstName, 32,stdin);
    // fgets take enter as a word \n so firstname and last are in 2 differents lines
    printf("lastName?\n");
    fgets(lastName, 32,stdin);
    strcpy(buffer,firstName);

    strcat(buffer,lastName);
    printf("%s",buffer);

    return(0);

}
