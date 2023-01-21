#include <stdio.h>

int max(int array[5]);

int main()
{
	int array[5], highest;
	
	for(int i=0; i<5; i++)
	{
		printf("\nEnter value[%d]: ", i+1);
		scanf("%d", &array[i]);
	}
	
	highest = max(array);
	printf("\nHighest value is = %d", highest);
}

int max(int array[5])
{
	double highest = -1000000;
	for(int i=0; i<5; i++)
	{
		if( array[i] > highest )
		{
			highest = array[i];
		}
	}
	
	return highest;
}
