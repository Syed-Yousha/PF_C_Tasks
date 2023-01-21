#include <stdio.h>

struct dates
{
  int day, year;  
  char month[20];
};

int main() {
    struct dates info[2];
    int i;
   
    for ( i=0; i<2; i++)
    {
        printf("\n");
       
        printf("\n Enter the day (user #%d): ", i+1);
        scanf(" %d", &info[i].day);
       
        printf("\n Enter the month (user #%d): ", i+1);
        fflush(stdin);
        scanf(" %s", &info[i].month);

        printf("\n Enter the year (user #%d): ", i+1);
        scanf(" %d", &info[i].year);        
    }
   
    if( (info[0].day == info[1].day) && (info[0].month == info[1].month) && (info[0].year == info[1].year) )
    {
        printf("\n Dates are equal!!");
    }
    else
    {
        printf("\n Dates are not equal");
    }
}