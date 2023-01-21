#include <stdio.h>
// Write a program which generate multiplication tables within range (3-10) for odds number only
// as follows. Note: Use Nested loops.
int main(){

    for (int i = 3; i < 10; i++)
    {
        if (i%2 != 0)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("\n %d * %d = %d", i, j+1, i*(j+1));
            }
            
        }
        printf("\n");
    }
    

}