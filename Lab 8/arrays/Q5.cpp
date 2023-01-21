#include <stdio.h>

int main(){

    int emps, employees;

    printf("Enter the number of employs company have: ");
    scanf("%d", &emps);

    employees = emps;

    // employ id's
    int emp_id[emps];
    for (int i = 0; i < emps; i++)
    {
        printf("Enter employ id: ");
        scanf("%d", &emp_id[i]);
    }

    // products id's
    int prod_id[6];
    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        printf("Enter product id: ");
        scanf("%d", &prod_id[i]);
    }

    // number of product sold by each employ
    int sold_prods[employees][6], total_sale=0, employ_sale[employees];

    printf("\n");
    for (int i = 0; i < employees; i++)
    {
        employ_sale[i] = 0;
        for (int j = 0; j < 6; j++)
        {
            printf("Products(%d) sold by employ (%d): ",prod_id[j] ,emp_id[i]);
            scanf("%d", &sold_prods[i][j]);

            total_sale += sold_prods[i][j];

             employ_sale[i] += sold_prods[i][j]; 
        }
        
    }

    // Printing data
    for (int i = 0; i < employees; i++)
    {
        printf("\nTotal sale of employ(%d) is: %d", emp_id[i], employ_sale[i]);
    }
    printf("\n\n");

    //Making transpose
    int transpose[employees][6];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < employees; j++)
        {
            transpose[i][j] = sold_prods[j][i];    
        }

    }


    printf("\n\n\t");
    for (int i = 0; i < employees; i++)
    {
        printf("emp(%d)\t", emp_id[i]);
    }
    
    printf("\n\n");
    for (int i = 0; i < 6; i++)
    {
        
        printf("P(%d)\t", prod_id[i]);
        for (int j = 0; j < employees; j++)
        {
            printf(" %d\t", transpose[i][j]);

        }
        printf("\n");
        
    }
    
    
    printf("\n\nTotal products sold are: %d", total_sale);

}