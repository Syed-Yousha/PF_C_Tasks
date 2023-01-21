#include <stdio.h>

// Write a program that asks for the number of calories and fat grams in a food. The program should
// display the percentage of calories that come from fat. If the calories from fat are less than 30% of the
// total calories of the food, it should also display a message indicating that the food is low in fat.
// One gram of fat has 9 calories, so Calories from fat = fat grams * 9
// The percentage of calories from fat can be calculated as: calories from fat/total calories Input
// validation: Make sure the number of calories and fat grams are not less than 0.
// Also, the number of calories from fat cannot be greater than the total number of calories. If that
// happens, display an error message indicating that either the calories or fat grams were incorrectly
// entered.

int main(){

    int cal=0, fat_grams=0, fat_cal=0, total_cal;

    printf("Enter the calories in food : ");
    scanf("%d", &cal);

    printf("Enter the fat gram in food : ");
    scanf("%d", &fat_grams);

    fat_cal = fat_grams * 9;
    total_cal = fat_cal + cal;

    if ( (cal > 0) && (fat_grams > 0))
    {
        if (fat_cal < (total_cal*0.3) )
        {
            printf("\n Food is low in fat...");
        }
        else if (fat_cal > (total_cal*0.3))
        {
            printf("\n Food is High in fat!");
        }

    }else
    {
        printf("\n You entered an invalid value!");
    }
    
}