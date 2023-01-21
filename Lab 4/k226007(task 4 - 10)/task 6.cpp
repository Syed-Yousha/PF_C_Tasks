#include <stdio.h>
#include <math.h>

int main(){

    int amount = 0;

    printf("Enter the amount you will give to cashier: \n");
    scanf("%d", &amount);

    while (amount != 0)
    {
            if( amount%100 == 0 )
        {
            printf("=> 100 \n");
            amount = amount - 100;
        }
        else if ( amount%50 == 0)
        {
            printf("=> 50 \n");
            amount = amount - 50;
        }
        else if ( amount%10 == 0)
        {
            printf("=> 10 \n");
            amount = amount - 10;
        }
        else if ( amount%5 == 0)
        {
            printf("=> 5 \n");
            amount = amount - 5;
        }
        else if ( amount%2 == 0)
        {
            printf("=> 2 \n");
            amount = amount - 2;
        }
        else{
            printf("=> 1 \n");
            amount = amount - 1;
        }
    }
    
    return 0;
}
