#include <stdio.h>

// Write a C program to calculate least common multiple (LCM) of 2 numbers. For example, taking
// input of 2 numbers 8 and 12, the least common multiple is 24.
// Note: Use only single iteration. No nesting of loops.

int main(){

    int num1, num2, max;

    printf("Enter the first positive number: ");
    scanf(" %d", &num1);
    printf("Enter the second positive number: ");
    scanf(" %d", &num2);

    max = ( num1 > num2)? num1: num2;    

    while (1)
    {
        
        if ( (max % num1 == 0) && (max % num2 == 0)) 
        {
            printf("\n LCM of %d and %d is => %d ", num1, num2, max);
            break;

        }
        max++;
    }
    
}