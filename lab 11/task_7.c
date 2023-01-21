#include <stdio.h>
#include <string.h>

struct date
{
    int days, year;
    char month[10];
};

int main()
{
    struct date d;
    char months[12][5] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"} ;

    d.days = 23;
    strcpy(d.month, "Dec");
    d.year = 2022;

    int more_days = 45, temp = d.days, i, flag=0;


    // Changing day
    if ( (more_days+temp)>60)
    {
        d.days = (more_days+temp) - 60;
    }
    else if ( (more_days+temp)>30)
    {
        d.days = (more_days+temp) - 30;
    }
    else
    {
        printf("\nYou entered a large change in date!!");
    }
    

    //Changing year
    if (strcmp(d.month, "Dec") == 0)
    {
        d.year++;
    }
    
        
    //Changing month
    for ( i = 0; i < 12; i++)
    {
        if (strcmp(d.month, "Nov") == 0)
        {
            strcpy(d.month, "Jan");
            break;
        }
        else if (strcmp(d.month, "Dec") == 0)
        {
            strcpy(d.month, "Feb");
            break;
        }
        else if (strcmp(d.month, months[i]) == 0)
        {
            strcpy(d.month, months[i+2]);
            break;
        }
        else
        {
            flag = 1;
            break;
        }
        
    }
    
    if (flag == 1)
    {
        printf("\nYou entered an invalid value!!");
    }

    

    printf("\n\nThe new Date is %d/ %s/ %d", d.days, d.month, d.year);
}