#include <stdio.h>

int prime_check(int num);


int main()
{
    int num ;

    printf("\nEnter any number to check if it is prime: ");
    scanf("%d", &num);

    int flag = prime_check(num);

    if (flag == 1)
    {
        printf("\n%d is a prime number", num);
    }
    else
    {
        printf("\n%d is not a prime number", num);
    }
    
}

int prime_check(int num)
{

    int i, prime = 1;

    for ( i = 2; i < num; i++)
    {
        if (i == num && prime == 1)
        {
            continue;
        }
        else if (num % i == 0)
        {
            prime = 0;
        }
        
    }

    // printf("\n%d", prime);
    return prime;   
}