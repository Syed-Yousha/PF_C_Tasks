#include <stdio.h>

int main()
{
    //Writing
    FILE *fptr, *fptr2, *fptr3;

    fptr = fopen("Q1_file1", "w");
    fptr2 = fopen("Q1_file2", "w");

    fputs("This is file 1", fptr);
    fputs("This is file 2 (6007)", fptr2);

    fclose(fptr);
    fclose(fptr2);

    //Reading
    fptr = fopen("Q1_file1", "r");

    char read1[1000];
    if ( fptr != NULL)
    {
        fgets(read1, 1000, fptr);
        printf("\n%s", read1);
    }
    else
    {
        printf("\nCannot recognize the file! - file1");
    }
    

    fptr2 = fopen("Q1_file2", "r");
    
    char read2[1000];
    if ( fptr != NULL)
    {
        fgets(read2, 1000, fptr2);
        printf("\n%s", read2);
    }
    else
    {
        printf("\nCannot recognize the file! - file2");
    }

    fclose(fptr);
    fclose(fptr2);

    //Writing both files data into 3rd file
    jump:
        fptr = fopen("Q1_file1", "r");
        fptr2 = fopen("Q1_file2", "r");
        fptr3 = fopen("Q1_file3", "w");

        char content[1000];
        if ( fptr != NULL && fptr2 != NULL)
        {
            fgets(content, 1000, fptr);
            fputs(content, fptr3);


            fprintf(fptr3,"\n");
            fgets(content, 1000, fptr2);
            fputs(content, fptr3);         
        }
        else
        {
            printf("\nFiling not working");
            goto jump;
        }
        
        

    return 0;
}