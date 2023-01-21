#include <stdio.h>

//You are taking two numbers as input from user, let’s consider first number is 256 and the second
//number is 2. After taking the input the first number is shifted two places to the right and the second
//number is doubled. The user wants you to write a program which meets the above mentioned
//requirements until the both the inputs become equal.

//Note: Use while loop only

int main(){
	
	
	int num1, num2;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the Second number (should be less than first number): ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		
		while( num1 != num2){
			
			num1 >>= 2;
			num2 = num2 * 2;
			printf(" num1 = %d \n", num1);
			printf(" num2 = %d \n\n", num2);
		}
		
	}else{
		printf("First number should be greater than second number!");
	}	
	
	
}