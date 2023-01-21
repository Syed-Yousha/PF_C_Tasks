#include <stdio.h>
#include <math.h>

int main(){
	
	int num1 = 0;
	int num2 = 0;
	
	printf("Enter the value of first number:");
	scanf("%d", &num1);
	
	printf("Enter the value of second number:");
	scanf("%d", &num2);
	
	int add = num1 + num2;
	printf("\naddition => %d \n", add);
		
	int sub = num1 - num2;
	printf("subtraction => %d \n", sub);
	
	int mul = num1 * num2;
	printf("multiplication => %d \n", mul);
	
	int div = num1 / num2;
	printf("division => %d \n", div);
		

}
