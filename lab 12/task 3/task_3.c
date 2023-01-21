#include <stdio.h>
#include <string.h>
#define MAX 20

struct marks
{
    char id[10], name[20], gender[5];
    int quiz_1, quiz_2, mid, final, total; 
};


int main()
{
    // int students;
    // printf("\nEnter the number of students: ");
    // scanf("%d", &students);

    struct marks stud;
    char exit;
    
    FILE *fptr;
    fptr = fopen("student.txt","a");

    do
    {
        printf("\n\nEnter your id: ");
        scanf(" %[^\n]%*c", stud.id);
        fprintf(fptr, "Student id: %s", stud.id);
        fprintf(fptr ,"\n ");

        printf("\nEnter your name: ");
        scanf(" %[^\n]%*c", stud.name);
        fprintf(fptr, "Student name: %s", stud.name);
        fprintf(fptr ,"\n ");

        printf("\nEnter your gender: ");
        scanf(" %[^\n]%*c", stud.gender);
        // fflush(stdin);
        // scanf(" %s", stud.gender);
        fprintf(fptr, "Student gender: %s", stud.gender);
        fprintf(fptr ,"\n ");

        printf("\nEnter your Quiz 1 marks: ");
        scanf("%d", &stud.quiz_1);
        fprintf(fptr, "Student Quiz 1 marks: %d", stud.quiz_1);
        fprintf(fptr ,"\n ");

        printf("\nEnter your Quiz 2 marks: ");
        scanf("%d", &stud.quiz_2);
        fprintf(fptr, "Student Quiz 2 marks: %d", stud.quiz_2);
        fprintf(fptr ,"\n ");

        printf("\nEnter your Mid-term marks: ");
        scanf("%d", &stud.mid);
        fprintf(fptr, "Student Mid-term marks: %d", stud.mid);
        fprintf(fptr ,"\n ");

        printf("\nEnter your Final-exam marks: ");
        scanf("%d", &stud.final);
        fprintf(fptr, "Student Finals marks: %d", stud.final);
        fprintf(fptr ,"\n ");

        printf("\nEnter your Total marks: ");
        scanf("%d", &stud.total);
        fprintf(fptr, "Student Total marks: %d", stud.total);
        fprintf(fptr ,"\n ");
        fprintf(fptr ,"\n ");
        
        printf("\nEnter 'E' or 'e' for exit, or any other key to continue: ");
        fflush(stdin);
        scanf(" %c", &exit);
        
        if (exit == 'E' || exit == 'e')
        {
            break;
        }
        
    }while(1);

    fclose(fptr);


    
}