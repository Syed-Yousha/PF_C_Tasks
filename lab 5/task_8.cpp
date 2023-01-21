#include <stdio.h>

int main(){

    int units ;
    float bill;

    printf("\t \t \t Program to calculate Electricity bill \n\n");
    printf("Please enter the unit of Electricity consumed : ");
    scanf("%d", &units);

    if ( units > 600){
        bill = units * 25;
    }else if ( units > 400){
        bill = units * 22;
    }else if ( units > 200){
        bill = units * 20;
    }else
    {
        bill = units * 18;
    }
    
    printf("Your Electricity Bill = %f", bill);

}