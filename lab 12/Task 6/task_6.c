#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[20], roll_no[10], depart[10], sec;
    int batch, cgpa;
};


int main()
{
    int N, i;
    printf("\nEnter the number of students: ");
    scanf("%d", &N);

    struct student info[N];
    FILE *fptr = fopen("students.txt", "a+");

    //Saving data into file
    for ( i = 0; i < N; i++)
    {

        printf("\n\n***** STUDENT #%d*****", i+1);
        
        printf("\nEnter your roll number(e.g. 22k-1234): ");
        scanf(" %[^\n]%*c", info[i].roll_no);
        fprintf( fptr, "\n%s", info[i].roll_no);

        printf("\nEnter your name: ");
        scanf(" %[^\n]%*c", info[i].name);
        fprintf( fptr, "\t%s", info[i].name);
        
        printf("\nEnter your Department name: ");
        scanf(" %[^\n]%*c", info[i].depart);
        fprintf( fptr, "\t%s", info[i].depart);
        
        printf("\nEnter your section: ");
        scanf(" %c", &info[i].sec);
        fprintf( fptr, "\t%c", info[i].sec);
        
        printf("\nEnter your Batch: ");
        scanf(" %d", &info[i].batch);
        fprintf( fptr, "\t%d", info[i].batch);
        
        printf("\nEnter your CGPA: ");
        scanf(" %d", &info[i].cgpa);
        fprintf( fptr, "\t%d", info[i].cgpa);
        

    }
    fclose(fptr);   


    //Find data from Roll number
    char roll_num[10];
    printf("\nEnter the roll number(e.g. 22k-1234) for student information: ");
    scanf(" %[^\n]%*c", roll_num);

    FILE *fptr2 = fopen("students.txt", "r");

    if (fptr2 != NULL)
    {
        char content[1000];
        char temp[10];
        
        while ( fgets(content, 1000, fptr2) )
        {
            fscanf(fptr2,"%s", temp);
            // printf("\n%s", temp);
            
            if (strcmp( roll_num, temp) == 0 )
            {
                printf("\n %s", content);
            }
            
        }
        
    }
    else
    {
        printf("\nCould not access the file!!");
        exit(1);
    }
    
    
}