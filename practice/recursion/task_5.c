#include <stdio.h>

// Write a program in C to count the digits of a given number using recursion.


int digit_count(int);

int main()
{
    int num, digits;

    printf("\nEnter any number: ");
    scanf("%d", &num);

    digits = digit_count(num);

    printf("number of digits are %d", digits);    
}

int digit_count(int num)
{
    static int count = 0;    
    if (num <= 0)
    {
        return 0;
    }
    else
    {
        num = num / 10;
        count++;
        digit_count(num);
    }

    return count;

}
