#include <stdio.h>

int main(){
    int id=0, last[3], cities, buses, tickets;
    printf("\nEnter your id: ");
    scanf(" %d", &id);

    for (int i = 0; i < 3; i++)
    {     
          last[i] = id%10;
          id = id/10;
    }
    
    cities = last[0] + 2;
    buses = last[0] + ( last[1] * 10 );
    tickets = last[0] + ( last[1] * 10 ) + ( last[2] * 100 );

    // printf("\n%d %d %d", cities, buses, tickets);
    
    //Data collection in 3d array
    int bus_data[cities][buses][tickets], age[cities][buses][tickets], price, total[cities][buses];

    for (int i = 0; i < cities; i++)
    {
        for (int j = 0; j < buses; j++)
        {
            for (int k = 0; k < tickets; k++)
            {
                printf("\nEnter City(%d) Bus(%d) Passenger(%d) your age: ", i+1, j+1, k+1);
                scanf(" %d", &age[i][j][k]);

                if (age[i][j][k] > 60)
                {
                    price = 500 - (500 * 0.3);
                }else if (age[i][j][k] < 6)
                {
                    price = 500 * 0.5;
                }else
                {
                    price = 500;
                }
                
                bus_data[i][j][k] = price;
                total[i][j] += price; 

            }
            
        }
        
    }


    //Displaying data

    printf("\n\nCity\tBUS\tPassenger\tage\tamount(Rs.)\n");
    for (int i = 0; i < cities; i++)
    {
        for (int j = 0; j < buses; j++)
        {
            for (int k = 0; k < tickets; k++)
            {
                printf("\nCity%d\tBus%d\tPassenger%d\t%d\tRs.%d", i+1, j+1, k+1, age[i][j][k], bus_data[i][j][k]);
            }
            
        }
        
    }


    //Total sale
    printf("\n\ntotal sale for each bus in each city:");

    printf("\n\nCity\tBUS\tTotal Sale(Rs.)\n");
    for (int i = 0; i < cities; i++)
    {
        for (int j = 0; j < buses; j++)
        {
            printf("\nCity%d\tBus%d\tRs.%d", i+1, j+1, total[i][j]);
        }
            
    }    
    
       
    
}