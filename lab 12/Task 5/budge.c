#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr = fopen("budge.txt", "r");
    float sum1, sum2, sum3;
    float num;
    int i=0;

    if (fptr != NULL)
    {
        while ((fscanf(fptr, "%f", &num)) == 1)
        {
            if (i == 3)
            {
                i = 0;
            }
            
            if ( i == 0 )
            {
                sum1 += num;
            }
            else if ( i == 1)
            {
                sum2 += num;
            }
            else if ( i == 2)
            {
                sum3 += num;
            }
            
            i++;
            
            // printf("\n%f", num);
        }

        printf("\n\nSum #1 = %f,\tSum #2 = %f,\tSum #3 = %f", sum1, sum2, sum3 );
        
        fclose(fptr);
    }
    else
    {
        printf("\nFile not found!!");
        exit(1);
    }
    
}