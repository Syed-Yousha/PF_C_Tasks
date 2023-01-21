#include <stdio.h>

int main(){

    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter matrix element [%d, %d]: ", i+1,j+1);
            scanf(" %d", &matrix[i][j]);
        }
        
    }

    // Original Matrix
    printf("\nOriginal matrix is: ");
    printf("\n\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");

    }        

    //Making transpose
    int transpose[cols][rows];
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transpose[i][j] = matrix[j][i];    
        }

    }

    //Printing transpose
    printf("\nTranspose matrix is: ");
    printf("\n\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}