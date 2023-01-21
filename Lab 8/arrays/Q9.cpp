#include <stdio.h>

int main(){

    // Original Matrix
    int matrix[3][3] = 
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("\nMatrix before row exchange: \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
        
    }
    
    // Changing rows
    int row1, row2, x;

    printf("\nEnter first row number to be exchanged: ");
    scanf("%d", &row1);
    printf("Enter second row number to be exchanged: ");
    scanf("%d", &row2);

    printf("\n");
    printf("Matrix after row exchange: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == (row1-1))
            {
                x = row2-1;
                printf("%d ", matrix[x][j]);

            }else if (i == (row2-1))
            {
                x = row1-1;
                printf("%d ", matrix[x][j]);
            }else
            {
                printf("%d ", matrix[i][j]);
            }
            
        }
        printf("\n");

    }
    
}