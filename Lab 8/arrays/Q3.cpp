#include <stdio.h>

int main(){

    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);


    if (rows == cols)
    {
        
        int matrix[rows][cols];

        // Inputing values in matrix
        for (i = 0; i < rows; i++)   
        {
            for (j = 0; j < cols; j++)
            {
                printf("Enter the row %d ,number# %d element of matrix: ", i+1, j+1);
                scanf(" %d", &matrix[i][j]);
            }
            
        }

        int transpose_maker[rows][cols];

        printf("\n\n");
        for ( i = 0; i < rows; i++)
        {
            for ( j = 0; j < cols; j++)
            {
                transpose_maker[i][j] = matrix[i][j];
            }

        }
        

        // Making Transpose
        int transpose[rows][cols];

        for ( i = 0; i <= rows; i++)
        {
            for ( j = 0; j <= cols; j++)
            {
                transpose[i][j] = transpose_maker[j][i];
            }
            
        }
       
        // Checking if matrix is symmetric or asymmetric
        int flag=0;
        for ( i = 0; i < rows; i++)
        {
            for ( j = 0; j < cols; j++)
            {
                if (transpose[i][j] == matrix[i][j])
                {
                    continue;
                }else
                {
                    printf("\n Your matrix is Asymmetric..");
                    flag = 1;
                    break;
                }      
            }

            if ( flag == 1)
            {
                break;
            }
        }

        if ( flag == 0)
        {
            printf("\n Your matrix is Symmetric..");                    
        }
        
        // Displaying Matrix
        printf("\n\n");
        for ( i = 0; i < rows; i++)
        {
            for ( j = 0; j < cols; j++)
            {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");

        }
        
        printf("\n\n");                
        for ( i = 0; i < rows; i++)
        {
            for ( j = 0; j < cols; j++)
            {
                printf("%d ", transpose[i][j]);
            }
            printf("\n");
        
        }

    }else
    {
        printf("\n\nA square matrix should have an equal number of rows and columns!..");
    }
    
}