#include <stdio.h>
#include <math.h>

// Your teacher wants to test your mental math abilities, and asks you a question. He wants you to
// answer how many perfect squares there exist within a certain range of numbers. When the range
// is very large, you realise this problem is difficult to solve in your mind without using code.
// Take as input the range (lower limit, upper limit) into your program and compute how many perfect
// squares there exist within that range. Output should print on the screen each perfect square that
// exists within the range, and at the end the total amount of perfect squares in the range.
// Example: lower limit = 12, upper limit = 50.
// In this range, the following perfect squares exist: 16,25,36,49. Total perfect squares = 4.

int main(){

    int upper, lower, checker, count;
    float root;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("\n \n");

    for ( int num = lower; num <= upper ; num++)
    {
        root = sqrt(num);
        checker = sqrt(num);

        if( root == checker){
            printf(" %d  ", num);
            count++;
        }
    }

    printf("\n\n Total number of perfect squares are: %d", count);
    
}