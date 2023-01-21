#include <stdio.h>
#include <string.h>

void count_freq(int num,int array[]);

int main()
{
	int num;
	printf("\nEnter the number of Elements to be stored in array: ");
	scanf("%d", &num);
	
	int array[num];
	
	for(int i=0; i<num; i++)
	{
		printf("\nEnter #%d values in array: ", i+1);
		scanf("%d", &array[i]);
	}
	
	count_freq(num, array);
}

void count_freq(int num,int array[])
{
	int count=0;
	
	for(int i=0; i<10; i++)
	{
		count =0;
		for(int j=0; j<num; j++)
		{
			if(i == array[j])
			{
				count++;				
			}
		}
		
		printf("\n number %d have a frequency of %d times.", i, count);
	}
}
