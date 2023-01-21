// Write a program in C to calculate the sum of numbers from 1 to n using recursion. 
#include <stdio.h>

int summ_rec(int);

int main()
{
    int n = 5;
    
    int sum = summ_rec(n);

    printf("\nthe sum is %d", sum);
}

int summ_rec(int n)
{
    
    int res;

    if (n == 1)
    {
        return (1);
    }
    else
    {
        res = n + summ_rec(n -1);
    }
    
    // printf("%d ", res);
    return res;
}

