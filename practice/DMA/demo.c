#include <stdio.h>
#include <stdlib.h>

int main()
{
    //------------ Malloc ------------
    // int *ptr, i;

    // ptr = (int *)malloc(3 * sizeof(int));

    // for (i = 0; i < 3; i++)
    // {
    //     scanf("%d", (ptr + i));
    // }

    // for (i = 0; i < 3; i++)
    // {
    //     printf("%d", *(ptr + i));
    // }

    //------------ Calloc ------------
    int *ptr, i;

    ptr = (int *)calloc(3, sizeof(int));

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the calloc value %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\nvalue %d => %d", i+1, ptr[i]);
    }

    //------------ realloc ------------
    int n;
    printf("\nEnter the size of new array: ");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n*sizeof(int));

    if (ptr == NULL)
    {
        printf("\nError! memory did not been allocated!!");
        exit(1);
    }
    

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter new realloc value %d: ", i+1);
        scanf("%d", &ptr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("\nnew value %d => %d", i+1, ptr[i]);
    }
    
    free(ptr);   
}