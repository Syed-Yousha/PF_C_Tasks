#include <stdio.h>
#include <string.h>

struct students
{
	char roll_num[10], name[30], depart[30], course[30];
	int year;
};

int main()
{
	int n, i;
	
	printf("\nEnter the number of students \n(note: should be under 450): ");
	scanf(" %d", &n);
	
	if( n < 450)
	{
		struct students s[n];
		
		for( i=0; i<n; i++)
		{
			printf("\nEnter student #%d roll num (eg. k226007): ", i+1);
			scanf(" %[^\n]*%c", &s[i].roll_num);
			printf("\nEnter student #%d name: ", i+1);
			scanf(" %[^\n]*%c", &s[i].name);
			printf("\nEnter student #%d department: ", i+1);
			scanf(" %[^\n]*%c", &s[i].depart);
			printf("\nEnter student #%d course: ", i+1);
			scanf(" %[^\n]*%c", &s[i].course);
			printf("\nEnter student #%d year of joining: ", i+1);
			scanf(" %[^\n]*%c", &s[i].year);
			
		}	
		
		// Displaying students of particular year
		int year;
		
		printf("\nEnter the a particular year: ");
		scanf(" %d", &year);
		
		for( i=0; i<n; i++)
		{
			if( s[i].year == year)
			{
				printf("\n=> %s", s[i].name);
			}
		}
	}
	else
	{
		printf("\nYou entered an invalid value!");
	}
	
	return 0;
}