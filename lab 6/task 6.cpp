#include <stdio.h>

// FAST NUCES Cafeteria owner want to start coffee machine for winter season and he need a software
// for that write a program to control a coffee machine. Allow the user to input the type of coffee as B
// for Black and W for White. Ask the user if the cup size is double and if the coffee is manual. The
// following table details the time chart for the machine for each coffee type. Display a statement for
// each step. If the coffee size is double, increase the baking time by 50 percent. Use functions to display
// instructions to the user and to compute the coffee time.
// Note: Use switch structure to solve this problem.

int main(){

    char coffee, size;
    int time;

    printf("Enter 'B' for Black coffe or 'W' for white coffee : ");
    scanf(" %c", &coffee);

    printf("Do you want a Single mug(S) or a Double mug(D) : ");
    scanf(" %c", &size);


    switch(coffee){
        case 'W':

            time = 15+15+20+2+4+20;

            if (size == 'S')
            {
                printf("You have to wait for %d minutes...", time);
            }else if (size == 'D')
            {
                printf("You have to wait for %d minutes...", time*2);
            }else
            {
                printf("Invalid size of coffee!");
            }
                        
            break;

        case 'B':

            time = 15+15+20+2+4+20;

            if (size == 'S')
            {
                printf("You have to wait for %d minutes...", time);
            }else if (size == 'D')
            {
                printf("You have to wait for %d minutes...", time*2);
            }else
            {
                printf("Invalid size of coffee!");
            }

            break;

        default :

            printf("You entered an invalid coffe type!");
            break;
    }

}