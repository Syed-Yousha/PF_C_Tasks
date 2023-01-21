#include <stdio.h>
// #include <string.h>
// #define MAX_LIMIT 20 

struct employees
{
    char name[20];
    int salary, hours_per_day;
};

int main()
{
    struct employees info[10];
    int i;

    for ( i = 0; i < 10; i++)
    {
        printf("\nEnter your name: ");
        // scanf(" %[^\n]%*c", &info[i].name);
        // fgets(info[i].name, MAX_LIMIT, stdin);
        scanf(" %s", info[i].name);

        printf("\nEnter your salary: ");
        scanf("%d", &info[i].salary);

        printf("\nEnter the hours you worked per day: ");
        scanf("%d", &info[i].hours_per_day);

        if (info[i].hours_per_day >= 12)
        {
            info[i].salary += 150;
        }
        else if (info[i].hours_per_day >= 10)
        {
            info[i].salary += 100;
        }
        else if (info[i].hours_per_day >= 8)
        {
            info[i].salary += 50;
        }
        else
        {
            continue;
        }
    
    }

    for ( i = 0; i < 10; i++)
    {
        printf("\n\nEmploy name: %s", info[i].name);
        printf("\nEmploy final salary: %d", info[i].salary);
    }
    
    
    return 0;
}