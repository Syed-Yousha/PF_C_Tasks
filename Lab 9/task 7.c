#include <stdio.h>

void swap( int n1, int n2);

int main()
{
	int n1, n2;
	
	printf("\nEnter the first numnber: ");
	scanf(" %d", &n1);
	printf("\nEnter the second numnber: ");
	scanf(" %d", &n2);
	
	printf("\n\nbefore swaping n1 = %d and n2 = %d", n1, n2);
	
	swap( n1, n2);
	return 0;
}

void swap( int n1, int n2)
{
	int swaper;
	
	swaper = n1;
	n1 = n2;
	n2 = swaper;
	
	printf("\nAfter swaping n1 = %d and n2 = %d", n1, n2);
	
}
