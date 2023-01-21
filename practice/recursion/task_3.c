#include <stdio.h>

// Write a program in C to Print Fibonacci Series using recursion.
// 1 1 2 3 5
int term;
int count = 0;

int fibona(int, int);

int main()
{
    int num =1, p_num=0;
    printf("\nEnter how many Fibonacci series numbers you want: ");
    scanf("%d", &term);

    printf("1");
    fibona(num, p_num);
}

int fibona(int num, int p_num)
{
    int next_num;

    if (count == term)
    {
        return 0;
    }
    else
    {
        next_num = num + p_num; 
        p_num = num;
        num = next_num;

        printf(" %d", next_num);
        count++;
        fibona(num, p_num);
    }
    
}
