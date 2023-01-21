#include <stdio.h>

int main(){

    int row=0, col=0, T=0;

    printf("Enter the row of matrix: ");
    scanf(" %d", &row);
    printf("Enter the column of matrix: ");
    scanf(" %d", &col);
    
    int matrix[row][col];

    // inputing elements of matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter the row %d ,number# %d element of matrix: ", i+1, j+1);
            scanf(" %d", &matrix[i][j]);
        }
        
    }


    // Taking "T", number of zeros in matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ( matrix[i][j] == 0)
            {
                T++;
            }
            
        }
        
    }
 
    int sparse_checker = (row * col) / 2;
 
    if ( T >= sparse_checker)
    {
        printf("\nYour matrix is sparse matrix");
    }else{
        printf("\nYour matrix is not a sparse matrix");
    }
    
}