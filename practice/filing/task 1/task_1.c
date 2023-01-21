#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fptr, *fptr2;

    fptr = fopen("file1.txt", "w+");
    fptr2 = fopen("file2.txt", "w+");

    fputs("This file 1 text", fptr);
    fputs("This file 2 text", fptr2);

    fclose(fptr);
    fclose(fptr2);

    FILE *fpt = fopen("file1.txt", "r"), *fpt2 = fopen("file2.txt", "r");
    FILE *fptr3 = fopen("file3.txt", "w+");

    if (fpt == NULL)
    {
        printf("\nFile not found");
        exit(1);
    }

    char temp[1000];
    while (fgets(temp, 1000, fpt))
    {
        fputs(temp, fptr3);
        puts(temp);
    }

    char temp2[1000];
    while (fgets(temp2, 1000, fpt2))
    {
        fprintf(fptr3, "\n");
        fputs(temp2, fptr3);
        puts(temp2);
    }
}