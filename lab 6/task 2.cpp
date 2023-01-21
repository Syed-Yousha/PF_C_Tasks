#include <stdio.h>

// Consider the use case of task 01 where you want to check if the user entered number is
// negative then your program must display a message “The entered number is negative”
// otherwise the message “The entered number is positive” should be displayed. If the entered
// number is zero, then the message “The number is zero” should be displayed.
// Note: (Use conditional operator only)

int main(){
	
	int num = 0;
	printf("Enter your number : ");
	scanf("%d", &num);
	
	(num == 0)? printf("Number is zero") :(num>0? printf("Number is positive"): printf("Number is negative"));
	
	return 0;	
}