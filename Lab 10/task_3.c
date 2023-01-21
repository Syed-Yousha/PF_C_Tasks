#include <stdio.h>

int main()
{
    int n, i;

    printf("\nEnter the size of array: ");
    scanf("%d", &n);

    float array[n], highest = -10000, second_highest = -10000;

    // value in array
    for ( i = 0; i < n; i++)
    {
        printf("\nEnter the value #%d: ", i+1);
        scanf(" %f", &array[i]);
    }

    //finding highest
    for ( i = 0; i < n; i++)
    {
        if ( *(array + i) > highest )
        {
            highest = *(array + i);
        }
        
    }

    //Removing highest
    for ( i = 0; i < n; i++)
    {
        if ( highest == *(array + i) )
        {
            *(array + i) = 0;
        }
        
    }

    //Finding second highest
    for ( i = 0; i < n; i++)
    {
        if ( *(array + i) > second_highest )
        {
            second_highest = *(array + i); 
        }
        
    }   

    printf("\n\nThe Second highest is => %f", second_highest);
    
    
}