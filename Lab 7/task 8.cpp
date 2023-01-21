#include <stdio.h>

int main(){

    int num;

    printf("Enter any number: ");
    scanf(" %d", &num);


    for (int i = 0; i <= num; i++)
    {
        if (i == 0)
        {
            printf("\n\n %d \t %d \t %d \t %d ", i,i,i,i);
        }
        else if (i%2 == 0 && i%3 != 0)
        {
            printf("\n\n %d \t \t \t %d", i,i);
        }
        else if (i%3 == 0)
        {
            printf("\n\n %d \t %d \t %d \t %d ", i,i,i,i);
        }else
        {
            printf("\n\n \t %d \t %d", i,i);
        }
        

    }
    

}