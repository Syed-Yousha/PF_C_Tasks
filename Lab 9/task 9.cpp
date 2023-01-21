#include <stdio.h>


int* bounds(int nums[], int n)
{
	static int min_max[2], min = 100000, max = -100000;
	
	for(int i=0; i<n; i++)
	{
		printf("\n", nums[i]);	
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			if( ( j == 0 ) && ( nums[i] > max ))
			{
				max = nums[i];
			}
			else if( ( j == 1 ) && ( nums[i] < min ))
			{
				min = nums[i];
			}
		}		
		
	}
	
	min_max[0] = min;
	min_max[1] = max;
	
	printf("\n minimum value is %d", min_max[0]);
	printf("\n miximum value is %d", min_max[1]);
	int *add = min_max[0];
	return add;	
}


int main()
{
	int n;
		
	printf("\nHow many values you want to input? : ");
	scanf(" %d", &n);
	
	int nums[n], *addr;
	
	for(int i=0; i<n; i++)
	{
		printf("\nEnter value[%d]: ", i+1);
		scanf(" %d", &nums[i]);
		
	}
	
	addr = bounds( nums, n);
	
	printf("\n minimum value is %d", (add + 0));
	printf("\n miximum value is %d", (add + 1));
}
