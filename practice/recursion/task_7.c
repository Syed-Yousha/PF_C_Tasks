#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int R1, C1, R2, C2;

int multiply(int matrix1[][C1],int matrix1[][C2] )
{
    //  1 2     5 6
    //  3 4     7 8
    static int i = 0, j = 0;
    if ()
    {
        
    }
    else
    {
        for ( j = 0; i < count; i++)
        {
            /* code */
        }
        
    }
    
    
}

int main()
{
    printf("\nEnter the number of rows for 1st matrix: ");
    scanf(" %d", &R1);
    
    printf("\nEnter the number of cols for 1st matrix: ");
    scanf(" %d", &C1);
    
    printf("\n\nEnter the number of rows for 1st matrix: ");
    scanf(" %d", &R2);
    
    printf("\nEnter the number of cols for 1st matrix: ");
    scanf(" %d", &C2);
    
    if ( C1 != R2)
    {
        printf("\nCannot multiply the matrix, invalid indexes!!");
        exit(1);
    }
    
    // Taking matrix 
    printf("\n\n");
    printf("1st Matrix:\n");
    int i, j, matrix1[R1][C1], matrix2[R2][C2];
    for ( i = 0; i < R1; i++)
    {
        for ( j = 0; j < C1; j++)
        {
            printf("\nEnter Row#%d Col#%d element of matrix 1: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);   
        }
        
    }

    printf("\n\n2nd Matrix:\n");
    for ( i = 0; i < R2; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            printf("\nEnter Row#%d Col#%d element of matrix 2: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);   
        }
        
    }

    // Priting element matrix 1
    printf("\n\nMatrix 1 Elements: \n");
    for ( i = 0; i < R1; i++)
    {
        for ( j = 0; j < C1; j++)
        {
            printf("%d ", matrix1[i][j]);
              
        }
        printf("\n");
    }   

    // Priting element matrix 1
    printf("\n\nMatrix 2 Elements: \n");
    for ( i = 0; i < R2; i++)
    {
        for ( j = 0; j < C2; j++)
        {
            printf("%d ", matrix1[i][j]);   
        }
        printf("\n");
    }

    multiply(matrix1, matrix2);
}