#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* dynamic_array, id[7];
    int n, i;

    printf("\nHow many characters are in your name: ");
    scanf("%d", &n);

    // memory allocation
    dynamic_array = (char*) calloc(n, sizeof(char));
    

    if (dynamic_array == NULL)
    {
        printf("\nMemory is not allocated");
        exit(0);
    }
    else
    {
        printf("\nEnter your full name: ");
        for ( i = 0; i < n; i++)
        {
            scanf(" %c", dynamic_array[i]);
        }
        printf("\nEnter your Id: ");
        scanf(" %s", id);

        printf("\nYour full name is: ");
        for (i = 0; i < n; i++)
        {
            printf("%c", dynamic_array[i]);
        }
        
        free(dynamic_array);
    }
       
    return 0;

}