#include <stdio.h>

int main()
{
   int array[] = {1, 2, 3, 4, 5, 6, 7}, i, sum=0;

   for ( i = 0; i < sizeof(array)/4; i++)
   {
        sum += *(array + i);
   }

    printf("\nsum of array => %d", sum);
    
}