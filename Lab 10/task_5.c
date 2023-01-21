#include <stdio.h>

int sort_function( int* array, int size, int order );

int main()
{
    int size, i, order;

    printf("\nEnter the size of array: ");
    scanf("%d", &size);

    int array[size];

    // value in array
    for ( i = 0; i < size; i++)
    {
        printf("\nEnter the value #%d: ", i+1);
        scanf(" %d", &array[i]);
    }

    printf("\nWrite '1' for Asscending or '2' for descending sort: ");
    scanf(" %d", &order);

    sort_function(array, size, order);

    //Display
    printf("\nValues after sorting: \n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    
}

int sort_function(int* array, int size, int order )
{
    int i, j, temp;

    if (order == 1)
    {
        // Asscending
        for ( i = 0; i < size; i++)
        { 
            for ( j = i + 1; j < size; j++)
            {
                if ( *(array + i) > *(array + j) )
                {
                    temp = *(array + i);
                    *(array + i) = *(array + j);
                    *(array + j) = temp;  
                }            
            }
    
        }
        
    }else if (order == 2)
    {
        // Descending
        for ( i = 0; i < size; i++)
        {
            for ( j = i + 1; j < size; j++)
            {
                if ( *(array + i) < *(array + j) )
                {
                temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;  
                }
            }
        }

    }else
    {
        printf("\nYou enter an invalid value!!");
    }
    
}