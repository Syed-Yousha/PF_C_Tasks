#include <stdio.h>
#include <string.h>

//50 marks - trainee 
//60 markswith 1 year - assistant
//70 marks with 2 year - associate

void positions(int marks,int exp);

int main()
{
	int marks,exp;
	
	printf("\nEnter your marks: ");
	scanf("%d", &marks);
	printf("\nEnter your experiance in years: ");
	scanf("%d", &exp);
	
	positions(marks, exp);
}


void positions(int marks,int exp)
{
	if((marks >= 0) && (marks <= 100))
	{
		if((marks>=70) && (exp>=2))
		{
			printf("\nCongrats you are selected as an Associate Developer!!");	
		}
		else if((marks>=60) && (exp>=1))
		{
			printf("\nCongrats you are selected as an Assistant Developer!!");	
		}
		else if(marks>=50)
		{
			printf("\nCongrats you are selected as a trainee Engineer!!");			
		}
		else
		{
			printf("\nBetter luck next time!!");			
		}
	}
	else
	{
		printf("\nYou entered an inavlid value!!");				
	}
					
}

