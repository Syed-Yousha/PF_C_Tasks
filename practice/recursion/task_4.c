#include <stdio.h>

// Write a program in C to print the array elements using recursion.
int n;
static int i = 0;

int display(int array[])
{

    if (i == n)
    {
        return 0;
    }
    else
    {
        printf("%d ", array[i]);
        i++;
        display(array);
    }
    

}

int main()
{
    printf("\nEnter the number of elements of array: ");
    scanf("%d", &n);

    int i, array[n];
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter element No.%d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\nValues of array are: \n");
    display(array);
}