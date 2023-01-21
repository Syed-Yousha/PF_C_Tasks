#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #define max 30;
struct data
{
    float CGPA;
    int roll_no, batch;
    char name[30], dpt[30], sec;
};

int main()
{
    int n, i;

    printf("\nEnter the number of students: ");
    scanf("%d", &n);

    struct data std[n];
    FILE *fptr = fopen("file.txt", "a+");

    for (i = 0; i < n; i++)
    {
        fprintf(fptr, "\n");

        printf("\n\nstudent #%d roll num (eg.1234): ", i + 1);
        scanf(" %d", &std[i].roll_no);
        fprintf(fptr, "\t%d", std[i].roll_no);

        printf("\nstudent #%d name: ", i + 1);
        scanf(" %[^\n]%*c", std[i].name);
        fprintf(fptr, "\t%s", std[i].name);

        printf("\nstudent #%d department: ", i + 1);
        scanf(" %[^\n]%*c", std[i].dpt);
        fprintf(fptr, "\t%s", std[i].dpt);

        printf("\nstudent #%d section: ", i + 1);
        scanf(" %c", &std[i].sec);
        fprintf(fptr, "\t%c", std[i].sec);

        printf("\nstudent #%d batch: ", i + 1);
        scanf(" %d", &std[i].batch);
        fprintf(fptr, "\t%d", std[i].batch);

        printf("\nstudent #%d CGPA: ", i + 1);
        scanf(" %f", &std[i].CGPA);
        fprintf(fptr, "\t%f", std[i].CGPA);
    }

    fclose(fptr);

    // Searching Roll num
    char u_roll[10];
    printf("\nEnter a roll number to print student info: ");
    scanf(" %s", &u_roll);

    FILE *fptr2 = fopen("file.txt", "r");

    if (fptr2 == NULL)
    {
        printf("\nFile not found!!");
        exit(1);
    }
    
    char content[1000], temp[10];

    while (fgets(content, 1000, fptr2))
    {
        fscanf(fptr, "%s", temp);
        if ( strcmp(u_roll, temp) == 0)
        // if (u_roll == temp)
        {
            fgets(content, 1000, fptr2);
            printf(" %s", content);
            break;
        }
        
    }
    
    fclose(fptr2);

    // Searching from structure array
    // for ( i = 0; i < n; i++)
    // {
    //     if (std[i].roll_no == u_roll)
    //     {
    //         printf("\n\nStudent info:");

    //         printf("\n%s", std[i].name);
    //         printf("\t%s", std[i].dpt);
    //         printf("\t%d", std[i].batch);
    //         printf("\t%c", std[i].sec);
    //         printf("\t%f", std[i].CGPA);
    //     }
        
    //     if ( std[i].roll_no == u_roll && i == (n-1) )
    //     {
    //         printf("\nRoll number not found!!");
    //         break;
    //     }
    // }
    
    // 22k
    for ( i = 0; i < n; i++)
    {
        if (std[i].batch == 22)
        {
            printf("\n\nStudent from batch 22k:");

            printf("\n%s", std[i].name);
            printf("\t%s", std[i].dpt);
            printf("\t%d", std[i].batch);
            printf("\t%c", std[i].sec);
            printf("\t%f", std[i].CGPA);
        }

    }


    return 0;

}