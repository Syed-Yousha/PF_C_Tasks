# include <stdio.h>
#include <math.h>


int main(){
    int num1 = 0;
    int num2 = 0;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("num1 = %d \n", num1);
    printf("num2 = %d \n", num2);
    printf("num1 > num2 is %d \n", num1 > num2);
    printf("num1 < num2 is %d \n", num1 < num2);
    printf("num1 == num2 is %d \n", num1 == num2);
    printf("num1 <= num2 is %d \n", num1 <= num2);

    return 0;
    
}