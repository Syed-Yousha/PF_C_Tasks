#include <stdio.h>

int main(){

    int  age, N;
    char area;

    printf("\n Enter the number of persons: ");
    scanf(" %d", &N);

    for (int i = 0; i < N; i++)
    {

        printf("\n\n Enter your age: ");
        scanf(" %d", &age);

        printf(" where are you from. Press 'U' for Urban and 'R' for Rural: ");
        scanf(" %c", &area);
        
        if ( age >= 18 && area == 'U' ) 
        {
            printf("\n Eligible for the vacination. Kindly proceed for vaccination");
        }
        else if ( age < 18 && area == 'R' ) 
        {
            printf("\n Not Eligible for the vaccine. Kindly wait for the vaccination");
        }
        else
        {
            printf("\n You will be notified soon");
            
        }
        
    }   

}