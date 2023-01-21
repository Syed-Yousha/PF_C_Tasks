#include <stdio.h>

int main(){

    int choice, ic, cost;
    float remain_hrs, days, hours;
    printf("\nEnter the number of icecreams you want to manufacture: ");
    scanf("%d", &ic);

    printf("Do you want the factory to run 8 hours (Enter = 8) or 16 hours (Enter = 16): ");
    scanf("%d", &choice);

    // Calculation for 8 hours
    if (choice == 8)
    {
        
        hours = ic / 50;  // total hours of manufacturing
        days = hours / 8;
        remain_hrs =  ( days - int(days)) * 8; // finding remaining hours
        cost = ic * 60;

        printf("\n\n it will take %d days and %d hours to manufacture your ice creams...", int(days), int(remain_hrs));
        printf("\n\n the total cost of ice creams will be: Rs. %d", cost);

    }
    else if (choice == 16)
    {
        
        hours = ic / 50;  // total hours of manufacturing
        days = hours / 16;
        remain_hrs =  ( days - int(days)) * 16; // finding remaining hours
        cost = ic * 120;

        printf("\n\n it will take %d days and %d hours to manufacture your ice creams...", int(days), int(remain_hrs));
        printf("\n\n the total cost of ice creams will be: Rs. %d", cost);

    }
    else
    {
        printf("\n You entered an invalid value!");
    }

}