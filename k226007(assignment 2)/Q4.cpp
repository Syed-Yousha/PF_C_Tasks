#include <stdio.h>

int main(){

    int num, age, gender, code, dig, sum, v_digit, u_digit;

    printf(" Enter your 4 digit number: ");
    scanf("%d", &num);

    if ( num < 10000)
    {
        printf(" Enter your age: ");
        scanf("%d", &age);
    
        printf(" Enter your gender, male => '1' & female => '0' : ");
        scanf("%d", &gender);

        // making code
        code = num + age + gender;

        while (code > 0)
        {
            dig = code % 10;
            code = code / 10;
            sum = sum + dig;
        }
        
        v_digit = sum % 5;
        
        printf("\n Please Enter your verification digit: ");
        scanf("%d", &u_digit);

        if ( u_digit == v_digit)
        {
            printf("\n Your code have been varified.. You may enter.");
        
        }else
        {
            printf("\n You entered an invalid code..!");
        }

    }else
    {
        printf("\n You entered an invalid code!");
    }   

}