#include <stdio.h>
#include <string.h>
struct engines
{
    char serial[3], material[30];
    int mnf_year, quantity;
};

int main()
{
    struct engines info;
   
    printf("\nEnter the serial number: ");
    gets(info.serial);
   
    int a = info.serial[0];
    int b = info.serial[1];
    int c = info.serial[2];
   
    // printf("%d", a);
    // printf("%d", b);
    // printf("%d", c);
   
    if( (( a<=70) && (a>=65) ) && ( ( b<=70) && (b>=65) ) && ( ( c<=55) && (c>=48) ) )
    {
        printf("\nEnter the manufacturing year of the engine part: ");
        scanf(" %d", &info.mnf_year);
        printf("\nEnter the type of material used: ");
        gets( info.material);
        printf("\nEnter the quantity of part: ");
        scanf(" %d", &info.quantity);
    }
    else
    {
        printf("\nYou entered an invalid serial number");
    }
   
    return 0;
}