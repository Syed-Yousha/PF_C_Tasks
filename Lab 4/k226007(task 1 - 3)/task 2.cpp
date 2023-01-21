#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	
	printf("Enter any two numbers:\n");
	scanf("%d %d", &num1, &num2);
	
	++num1;
	printf("Increment(++num) => %d \n", num1);
	
	--num2;
	printf("decrement(--num) => %d \n", num2);
	
	return 0; 
}