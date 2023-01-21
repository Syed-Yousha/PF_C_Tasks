#include <stdio.h>

int main(){

    int loop, i, j;
    char mode;

    printf("Enter the number of iterations: ");
    scanf("%d", &loop);

    printf("Enter 'M' if you are driving your car or 'S' if it is on self driving mode: ");
    scanf(" %c", &mode);

    if (mode == 'S')
    {
        for ( i = 0; i < loop; i++)
        {
            printf("\n***Move straight");
            for ( j = 0; j < 5; j++)
            {
                printf("\nMove straight");                
            }

            printf("\n***");
            
        }
        
    }else if (mode == 'M')
    {
        for ( i = 0; i < loop; i++)
        {
            printf("\n**Mobile is in city zone");
            for ( j = 0; j < 5; j++)
            {
                printf("\nMobile is in city zone");                
            }

            printf("\n**");
            
        }
        
    }else
    {
        printf("\nYou entered an inavlid mode..!");
    }
    
}