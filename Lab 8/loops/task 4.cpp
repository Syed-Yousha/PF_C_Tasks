#include <stdio.h>

// Write a program which can stores 6 integers. Then check your stored array that it's symmetric or not. As
// the number of elements are even in given problem. Make sure that your code is generic and work for odd
// elements size as well. The array is symmetric if the value of the first element is equal to the last one, the
// value of the second one is equal to the value of the last but one, and so on. (Symmetric and Asymmetric
// differentiated in following figures)
// Note: Use Nested loop and Decision statements if required.

int main(){

    int nums[6], flag[6], flag2;

    for (int i = 0; i < 6; i++)
    {
        printf("\nEnter digit number[%d]: ", i+1);
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < 6; i++)
    {
        if (nums[i] == nums[5 - i])
        {
            
        }else
        {
            
        }
        
    }

}