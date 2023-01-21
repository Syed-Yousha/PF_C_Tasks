#include <stdio.h>
#include <math.h>

int main(){

    // Question 10 part a
    int num = 0;
    int digits = 0;
    int sum = 0;
    

    printf("Enter a four digit number:  ");
    scanf("%d", &num);

    if(num <= 9999 && num >= 1000){

        digits = num % 10;
        num = num / 1000;
        sum = sum + digits;

        digits = num;
        sum = sum + digits;
        
        printf("\n \t sum of first and last digits => %d", sum);
    }else
    {
        printf("\n \t You entered an invalid number!");
    }
    

}

