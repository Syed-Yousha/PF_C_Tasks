// Write a program in C to print first 50 natural numbers using recursion.
#include <stdio.h>

int rec(int x);

int main()
{
    rec(1);
}

int rec(int x)
{
    if (x <= 50)
    {
        printf("%d ", x);
        rec(x + 1);
    }
}