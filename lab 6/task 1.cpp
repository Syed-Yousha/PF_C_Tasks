#include <stdio.h>

// Write a program which asks your grade as input and stores it in a variable only if the grade is
// in range 50-100. If the value is not in range, then the variable should return -3 value.
// Note: (Use conditional operator only)

int main(){
	
	int grade,marks;
	printf("Enter your marks : ");
	scanf("%d", &grade);
	marks = (grade >= 50 && grade <= 100)? grade :-3;
	printf("Grade is %d", marks);
}