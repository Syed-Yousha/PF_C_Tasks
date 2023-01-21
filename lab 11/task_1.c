#include <stdio.h>
#include <string.h>
struct students
{
	char name[50];
	int  age;	
};

int main()
{
	int n, i; 	
	
//	struct students info;
	printf("\nEnter number of students: ");
	scanf("%d", &n);
	
	struct students st[n];
	
	for( i = 0; i < n; i++)
	{
		printf("\nEnter your name: ");
		scanf(" %s", &st[i].name);
		printf("\nEnter your age: ");
		scanf(" %d", &st[i].age);
	}
}