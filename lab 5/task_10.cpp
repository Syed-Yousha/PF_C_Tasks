#include <stdio.h>

int main(){

    char plane_class;
    int laguage, cost;

    printf("Enter the class of plane. Type 'E' = Economy, 'B' = Buisiness, 'V' = VIP : ");
    scanf(" %c", &plane_class);

    printf("Enter your laguage weight (Kg) : ");
    scanf("%d", &laguage);


    switch (plane_class)
    {
    case 'E':

        if (laguage > 40)
        {
            cost = laguage * 2;
        }
        else if (laguage > 25)
        {
            cost = laguage * 1.5;    
        }
        else
        {
            cost = 0;
        }
        
        

        break;

    case 'B':


        if (laguage > 50)
        {
            cost = laguage * 1.5;
        }
        else if (laguage > 35)
        {
            cost = laguage * 1.25;    
        }
        else
        {
            cost = 0;
        }

        break;

    case 'V':

        cost = 30;
        break;


    default:

        printf("You typed an invalid class name");
        break;
    }

    printf("Your laguage cost is : PKR %d", cost);

}