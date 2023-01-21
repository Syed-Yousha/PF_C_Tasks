#include <stdio.h>

//Task 03:
//As your CL1002 exam is to be conducted in coming week-09. You are practicing for your exam,
//you thought to write a program which can takes an integer number as input and displays the
//message “CL1002 Exam is in week 09” number of times equal to the integer entered. You are also
//applying a constraint if the user continuously entering positive integer as input then your program
//executes as you enter a negative integer your program exits and returns the total number of times
//message displayed. Write the code for the above mentioned scenario which you thought.
//Note: Use while loop and break statement only


int main(){
	
	int num, count,i = 1;
	
	while( num > 0 ){
		printf("Enter your number : \n");
		scanf("%d", &num);
		
		while(i <= num){
			i = i + 1;
			printf("CL1002 Exam is in week 09 \n");
			count = count + 1;
			
		}
		
		i = 1;
	}
	
	printf("\n The number of time message displayed is : %d \n", count);
	
}