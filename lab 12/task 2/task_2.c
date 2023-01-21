#include <stdio.h>
#include <string.h>

int main()
{
    // Initializing
    char content[1000],alph[] = "abcdefghijklmnopqrstuvwxyz";
    int occurance[strlen(alph)], i, j;
    
    for ( i = 0; i < strlen(alph); i++)
    {
        occurance[i] = 0;
    }
    
    FILE *fptr, *fptr2;

    fptr = fopen("sentence.txt", "r");
    
    // Fetching data from file
    if (fptr != NULL)
    {
        while (fgets(content, 1000, fptr))
        {
            

            for ( i = 0; i < strlen(content); i++)
            {
                // printf("\n%c", content[i]);
                for ( j = 0; j < strlen(alph); j++)
                {
                    if (content[i] == alph[j])
                    {
                        occurance[j]++;
                    }
                }
            }
                    
        }

        // for ( i = 0; i < strlen(alph); i++)
        // {
        //     printf("\n%d", occurance[i]);
        // }  
    }
    else
    {
        printf("\nCan not recognize the file!");
    }
    
    fclose(fptr);

    
    // Putting data into second file    
    fptr2 = fopen("occurance","w");

    for ( i = 0; i < strlen(alph); i++)
    {
        fprintf(fptr2, "Occurance of %c = %d \n", alph[i], occurance[i]);
    }
    
    fclose(fptr2);
    return 0;
}