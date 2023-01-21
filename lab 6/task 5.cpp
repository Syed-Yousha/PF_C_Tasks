#include <stdio.h>

// Write a program which asks your marks as input and display’s a message accordingly.
// Messages should be displays as:
// 85-100 display message: A
// 84-75 display message: B
// 74-65 display message: C
// 64-51 display message: D
// 0-49 display message: Fail
// If grade is out the mentioned numbers, then message displayed will be: Invalid input
// Note:
// (a) Use Conditional Operator only
// (b) Solve the same task using Nested If Else

int main(){
	int marks = 0;
	
	printf("Enter your marks : ");
	scanf("%d", &marks);
	
	(marks < 0 && marks > 100)? ((marks > 85)? printf("A") :(marks > 75)? printf("B"): (marks > 65)? printf("C"): (marks > 51)? printf("D"): printf("Failed") ): printf("You entered a invalid value!");
}