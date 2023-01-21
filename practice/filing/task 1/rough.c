#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[] = "jawwad";

    int i=0,j=0,k;
    // k = strlen(name);
    for ( i = i; i < 3; i++)
    {
        for ( j = i; j < i+1; j++)
        {
            printf(" %c", name[j]);
        }
        printf("\n");
    }
        
}
