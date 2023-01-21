#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char array[1000];

    printf("\nEnter the sentence to be reversed: \n\n");
    scanf(" %[^\n]%*c", &array);

    int i;
    printf("\n\nSentence in reverse is: \n\n");
    for ( i = strlen(array)-1; i >= 0; i--)
    {
        printf(" %c", array[i]);
    }
    // strrev(array);

    
}