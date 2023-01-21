#include <stdio.h>

// Task 09:
// Perfect numbers are defined as a number whose sum of divisors (other than the number itself) is
// equal to the number itself

// For example, if A = 6:
// The divisors of 6: 1, 2, 3. Sum = 6. Therefore 6 is a perfect number
// For example, if A = 28:
// The divisors of 28: 1, 2, 4, 7, 14. Sum = 28. Therefore 28 is a perfect number.
// Now, you are tasked with coding a program to check whether 2 numbers are mutually perfect.
// This means that given 2 numbers A and B, they are mutually perfect if the sum of divisors of A
// (other than A itself) is equal to B, and the sum of divisors of B (other than B itself) is equal to A.

// For example, if A = 220, B = 284:
// The divisors of A are: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110. Sum = 284.
// So the sum of divisors of A is equal to B.
// The divisors of B are: 1, 2, 4, 71, 142. Sum = 220.
// So the sum of divisors of B is equal to A.
// Hence, A and B are mutually perfect


int main(){

    int num1, num2, i=1, sum1=0, j=1, sum2=0;

    printf("Enter any num1 numbers: ");
    scanf("%d", &num1);
    printf("Enter any num2 numbers: ");
    scanf("%d", &num2);

    printf("\n");

    while (i < num1)
    {
        if (num1%i == 0)
        {
            printf("%d ", i);
            sum1 = sum1 + i;
        }
        i++;
    }
    printf(" sum of num1 divisors = %d \n\n", sum1);

    while (j < num2)
    {
        if (num2%j == 0)
        {
            printf("%d ", j);
            sum2 = sum2 + j;
        }
        j++;
    }
    printf(" sum of num2 divisors = %d \n\n", sum2);


    if (sum1 == num2 && sum2 == num1)
    {
        printf("The num1 and num2 are mutually perfect...");
    }else
    {
        printf("The num1 and num2 are not mutually perfect...");    
    }
    
    

}