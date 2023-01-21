#include <stdio.h>

int main(){

    int cups = 0, cash = 0 ;
    char choice = 'a';

    printf("Enter your choice.'Q' for Quantity or 'C' for Cash : ");
    scanf(" %c", &choice);

    if ( choice == 'Q')
    {
        printf("Enter the Quantity : ");
        scanf("%d", &cups);


        int coffe_cash = 35 * cups;
        int tea_cash = 30 * cups;
        // coffe = 35
        // tea cost = 30
        // 5.5% disc if cups>50 or amount>3000
        // 10% disc if cups>155 or amount>6500

        if ( cups > 50)
        {
            int coffee_disc = coffe_cash - (coffe_cash * 0.055);
            int tea_disc = tea_cash - (tea_cash * 0.055);

            printf("Coffee price after discount is : %d \n", coffee_disc);
            printf("Tea price after discount is: %d", tea_disc);
        }else if (cups > 155)
        {
            int coffee_disc = coffe_cash - (coffe_cash * 0.1);
            int tea_disc = tea_cash - (tea_cash * 0.1);

            printf("Coffee price after discount is : %d \n", coffee_disc);
            printf("Tea price after discount is: %d", tea_disc);
            
        }else
        {
            printf("If you choose Coffee then discount is : %d \n", coffe_cash);
            printf("If you choose Tea then discount is : %d", tea_cash);
            
        }
        
        

    }else if ( choice == 'C' )
    {
        printf("Enter the Amount : ");
        scanf("%d", &cash);

        int coffee_cups = cash / 35;
        int tea_cups = cash / 30;

        if (cash > 3000)
        {
            cash = cash + (cash * 0.055);

            int coff_disc_qnty = cash / 35;
            int tea_disc_qnty = cash / 30;

            printf("You coffee cups after discount are : %d \n", coff_disc_qnty);
            printf("You tea cups after discount are : %d", tea_disc_qnty);  
        }else if (cash > 3000)
        {
            cash = cash + (cash * 0.1);

            int coff_disc_qnty = cash / 35;
            int tea_disc_qnty = cash / 30;

            printf("You coffee cups after discount are : %d \n", coff_disc_qnty);
            printf("You tea cups after discount are : %d", tea_disc_qnty);  
            
        }else
        {
            printf("You coffee cups are : %d \n", coffee_cups);
            printf("You tea cups are : %d", tea_cups);  
            
        }
        
        
         

    }else
    {
        printf("invalid value! Try again...");
    }




}