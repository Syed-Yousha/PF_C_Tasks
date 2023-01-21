#include <stdio.h>

struct data
{
    char name[20];
    int age;
};

struct info
{
    char address[30];
    int phone;

    struct data p_info;
};


int main()
{
    // struct data person;
    struct info *ptr, person;
    ptr = &person;

    printf("\nEnter your name: ");
    scanf(" %s", ptr->p_info.name);

    printf("\nEnter your age: ");
    scanf(" %d", &ptr->p_info.age);

    printf("\nYour name is %s", ptr->p_info.name);
    printf("\nYour age is %d", ptr->p_info.age);

    return 0;

}
