#include <stdio.h> 


// Using IF and Switch statement, write a program that displays the following menu for the food items
// available to take order from the customer:
// ∙ B= Burger (Rs. 200)
// ∙ F= French Fries (Rs. 50)
// ∙ P= Pizza (Rs. 500)
// ∙ S= Sandwiches (Rs. 150)
// The costumer can order any combination of available food. The program first ask to enter the no of
// types of snacks i.e. 2, 3 or 4 then it ask to enter the choice i.e. B for Burger and then for quantity.
// The program should finally display the total charges for the order.


int main(){

    int snack_type, snack_qnty, B_cost, F_cost, P_cost, S_cost, t_cost;
    char snack;

    printf(" B = Burger \n F = Fries \n P = Pizza \n S = Sandwiches \n");

    printf("How many types of snacks do you want to order? : ");
    scanf("%d", &snack_type);

    if ( snack_type  == 1 )
    {
        printf("\nEnter the first snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);


        
        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n %d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n %d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n %d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n %d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\n You entered an invalid snack type!");
            break;
        }

        
    }else if ( snack_type == 2 )
    {
        // First snack calculation
        printf("\nEnter the first snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // First snack calculation
        printf("\nEnter the second snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);



        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

    }else if ( snack_type == 3 )
    {

        // First snack calculation
        printf("\nEnter the first snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // second snack calculation
        printf("\nEnter the second snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // Third snack calculation
        printf("\nEnter the third snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);



        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

    }else if ( snack_type == 4 )
    {

        // First snack calculation
        printf("\nEnter the first snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // second snack calculation
        printf("\nEnter the second snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // Third snack calculation
        printf("\nEnter the third snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);

        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

        // Fourth snack calculation
        printf("\nEnter the fourth snack : ");
        scanf(" %c", &snack);
        printf("Enter the snack quantity : ");
        scanf(" %d", &snack_qnty);



        switch (snack)
        {
        case 'B':
            
            B_cost = 200 * snack_qnty;
            printf("\n%d Burger (s) value %d PKR \n", snack_qnty, B_cost);
            break;

        case 'F':
            
            F_cost = 50 * snack_qnty;
            printf("\n%d Fries (s) value %d PKR \n", snack_qnty, F_cost);
            break;
        
        case 'P':
            
            P_cost = 500 * snack_qnty;
            printf("\n%d Pizza (s) value %d PKR \n", snack_qnty, P_cost);
            break;

        case 'S':
            
            S_cost = 150 * snack_qnty;
            printf("\n%d Sandwich (s) value %d PKR \n", snack_qnty, S_cost);
            break;

        default:
            printf("\nYou entered an invalid snack type!");
            break;
        }

    }else
    {
        printf(" You entered an inavlid number of snack type!");
    }
    
    
    

    printf("====================================================== \n");
    printf("You have Ordered! \n\n");

    t_cost = B_cost + F_cost + P_cost + S_cost;

    printf("Your total bill is : %d PKR \n", t_cost );
    printf("Thankyou for your order.... Have a nice day!");
}