#include <stdio.h>

int main(){
    int marks[10], i=0, passed=0, failed=0;


    // inputing and refining students marks
    while( i < 10)
    {
        printf("\nEnter marks for student #%d : ", i+1);
        scanf("%d", &marks[i]);

        if (marks[i] <= 10)
        {
            
            if (marks[i] > 5)
            {
                passed++;
            }else
            {
                failed++;
            }
            i++;

        }else
        {
            printf("\nEnter marks within range (1 - 10)! \n");
        }
          
    }

    // Printing students marks
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("S#%d\t", i+1);
    }
    
    printf("\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d \t", marks[i]);
    }

    printf("\n\n\nNumber of passed students is: %d", passed);
    printf("\n\nNumber of failed students is: %d", failed);
    
}