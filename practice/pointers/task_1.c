// Write a program in C to store n elements in an array and print the elements using pointer.

#include <stdio.h>

int main()
{
    int n, i;
    printf("\nEnter how many values you want to store: ");
    scanf("%d", &n);

    int array[n];

    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the #%d value: ", i+1);
        scanf("%d", (array + i));
    }

    for ( i = 0; i < n; i++)
    {
        printf("\nvalue number #%d is %d: ", i+1, *(array + i));
    }
    
}