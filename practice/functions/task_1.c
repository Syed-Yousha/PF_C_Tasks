// // Write a program in C to convert decimal number to binary number using the function.

#include <stdio.h>

int convert(int num)
{
    int binary=0;

    if (num > 0)
    {
        if (num%2 == 0)
        {
            binary *= 10;
            num = num/2;
        }
        else
        {
            binary *= 10;
            binary++;
            num = num/2;
        }
        
    }
    else
    {
        goto jump;
    }
    
        
    convert(num);
    jump:
        printf("%d", binary);
    
    
}

int main()
{
    int num = 345;

    convert(num);    
}

