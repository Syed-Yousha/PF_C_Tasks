#include <stdio.h>

int main(){

    int i=0, j=0, num=0, sum=0, avg=0;

    printf("how many positive numbers you want to enter?: ");
    scanf("%d", &i);

    int num_list[i];

    while( j < i )
    {

        printf("\n Enter any positive number: ");
        scanf(" %d", &num_list[j]);
        
        if ( num_list[j] > 0 )
        {
            sum = sum + num_list[j];
            j++;

        }else
        {
            continue;
        }
        
    }

    avg = sum/i;
    printf("\nYour sum and average are, sum = %d, average = %d", sum, avg);

}