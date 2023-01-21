#include <stdio.h>

int main(){

    float nums[6], a = 3.04;

    for (int i = 0; i < 6; i++)
    {
        a += 0.10;
        nums[i] = a;

        if (i == 5)
        {
            for (int j = 4; j >= 0; j--)
            {
                printf("\n%f", nums[j]);
            }
            
        }
        
    }
    

}