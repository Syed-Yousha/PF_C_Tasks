#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    int salary, id; 
};

struct organisation
{
    char oragnisation_name[20], organisation_number[20];
    int size;

    struct employee emp;
};

int main()
{
    struct organisation org;

    org.size = 123;
    strcpy(org.oragnisation_name, "NU-Fast");
    strcpy(org.organisation_number,"NUFAST123ABC");

    org.emp.id = 127;
    strcpy(org.emp.name, "linus Sebastian");
    org.emp.salary = 400000;

    printf("\nThe size of structure organisation: %d", org.size);
    printf("\nOrganisation Name: %s", org.oragnisation_name);
    printf("\nOrganisation number: %s", org.organisation_number);
    printf("\n\nEmployee id: %d", org.emp.id);
    printf("\nEmployee name: %s", org.emp.name);
    printf("\nEmployee salary: %d", org.emp.salary);

    return 0;
}