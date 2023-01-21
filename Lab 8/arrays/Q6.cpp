#include <stdio.h>

int main(){

    int student[5][9], obtain, percentage;

    // Inputing marks and info
    for (int i = 0; i < 5; i++)
    {
        obtain = 0;
        for (int j = 0; j < 9; j++)
        {
            if (j == 0)
            {
                printf("Enter your student id: ");
                scanf("%d", &student[i][j]);

            }else if ( (j > 0) && (j < 6))
            {
                printf("Enter C%d-Marks: ", j);
                scanf("%d", &student[i][j]);
                obtain = obtain + student[i][j];

            }else{
                switch (j)
                {
                case 6:
                    student[i][j] = 500;
                    break;
                case 7:
                    student[i][j] = obtain; 
                    break;
                case 8:
                    percentage = obtain/5;
                    student[i][j] = percentage;
                    break;
                
                default:
                    break;
                }

            }
            
            
        }
        
    }

    // Title display
    printf("\n\n");
    for (int i = 0; i < 9; i++)
    {
        if (i == 0)
        {
            printf("student id\t");
        }else if ( (i > 0) && (i < 6))
        {
            printf("C%d-Marks\t", i);
        }else{
            switch (i)
            {
            case 6:
                printf("Total-marks\t");
                break;
            case 7: 
                printf("obtain-marks\t");
                break;
            case 8:
                printf("percentage\t");
                break;
            
            default:
                break;
            }
        }
        
        
    }

    // Marks display   
    printf("\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d\t\t", student[i][j]);
        }
        printf("\n");
        
    }
    
}