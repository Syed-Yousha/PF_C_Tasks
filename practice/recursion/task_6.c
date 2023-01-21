#include <stdio.h>

// Write a program in C to find the LCM of two numbers using recursion.

int lcm(int num1, int num2)
{
    int a, b;
    static int res = 1;
    static int i = 2;
    if ((num1 <= 1) && (num2 <= 1))
    {
        return 1;
    }
    else
    {
        a = (num1 % i);
        b = (num2 % i);
        if ( a == 0 && b == 0 )
        {
            res *= i;
            num1 /= i;
            num2 /= i;
            lcm(num1, num2);
            
        }
        else if( a == 0 )
        {
            res *= i;
            num1 /= i;

            i++;
            lcm(num1, num2);
        }
        else if( b == 0 )
        {
            res *= i;
            num2 /= i;

            i++;
            lcm(num1, num2);
        }
        else if ( i == num1 && i == num2)
        {
            
        }
        else 
        {
            res *= num1*num2;
            num1 = 1;
            num2 = 1;

        }
        i++;
        lcm(num1, num2);
        return res;    

    }
    
}

int main()
{
    int num1, num2, res;

    printf("\nEnter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);


    res = lcm(num1, num2);

    printf("\nThe lcm of number %d and %d is %d", num1, num2, res);
}