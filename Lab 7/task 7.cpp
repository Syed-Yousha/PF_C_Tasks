#include <stdio.h>

// A palindrome number is defined as one which is the same forwards and backwards. For example,
// 121 is a palindrome. Reading from the left or the right, the number is the same – 121. Another
// example of a palindrome is 22.
// In contrast, 354 is not a palindrome since it reads 354 from the left (forward), and 453 from the
// right (backwards).
// Your task is to take any number as input from the user (in integer form) and check whether it is a
// palindrome or not, showing the result on the screen.

int main(){
    
    int num, count, countB, digA, digB, num1, div = 1;

    printf("Enter any number: ");
    scanf("%d", &num);

    num1 = num;

    while (num1 > 0)
    {
        num1 = num1/10;
        count++;
    }

    for ( int i = 1; i < count; i++)
    {
        div = div * 10;
    }
    
    num1 = num;
    countB = 0;

    while (countB != count)
    {
        digA = num % 10;   
        digB = num1 / div;

        if (digA == digB)
        {
            num = num/10;
            num1 = num1 - (digB * div);
            div = div/10;
            countB++;
            continue;
        }
        else
        {
            break;
        }
    }

    if (digA == digB)
    {
        printf("\n Your num is a palindrome!");
    }
    else
    {
        printf("\n Your num is not a palindrome!");
    }
    
}