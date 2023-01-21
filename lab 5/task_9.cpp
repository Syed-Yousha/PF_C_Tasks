#include <stdio.h>

int main(){

    int days;

    printf("Enter the late days : ");
    scanf("%d", &days);

    if (days > 14)
    {
        printf("Your charges are : 3000");
    }
    else if ( days > 7)
    {
        printf("Your charges are : 2000");
    }else
    {
        printf("Your charges are : 1000");
    }
    
    
    

}   