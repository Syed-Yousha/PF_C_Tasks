#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr = fopen("text.txt", "r");
    FILE *fptr2 = fopen("cypher.txt", "w");
    if ( fptr == NULL )
    {
        printf("\nFile does not found!!");
        exit(1);
    }

    char content[1000], cypher[1000], vowels[] = "aeiou", upp_vowels[] = "AEIOU";
    int i, j, v=1;
    while (fgets(content, 1000, fptr))
    {    
        //Finding vowels && Encryption
        for ( i = 0; i < strlen(content); i++)
        {
            
            for ( j = 0; j < strlen(vowels); j++)
            {
                if (content[i] == vowels[j] || content[i] == upp_vowels[j] )
                {
                    
                    if ( v % 2 == 0 )
                    {
                        fputs("VOW",fptr2);    
                    }
                    else
                    {
                        fputs("vow",fptr2);
                    }
                    v++;
                    
                    break;
                }
                else if ( content[i] == 's' )
                {
                    fputs("PF-Lab", fptr2);
                    i += 3;
                    break;
                }
                else if( j == strlen(vowels)-1 )
                {
                    fprintf(fptr2 ,"%c", content[i]);
                    break;
                }
                
            }
            
        }
        

    }

    fclose(fptr);
    fclose(fptr2);


    // Normal shift Cipher
    FILE *fptr3 = fopen("cypher.txt", "r");
    FILE *fptr4 = fopen("copy.txt", "w");      

    char cipher[1000];
    int temp;
    while ( fgets(cipher, 1000, fptr3) )
    {
        for ( i = 0; i < strlen(cipher); i++)
        {
            if ( cipher[i] == 'x' || cipher[i] == 'X' )
            {
                temp = (cipher[i] - 23);
                fprintf( fptr4 ,"%c", temp ); 
            }
            else if ( cipher[i] == 'y' || cipher[i] == 'Y' )
            {
                temp = (cipher[i] - 23);
                fprintf( fptr4 ,"%c", temp); 
            }
            else if ( cipher[i] == 'z' || cipher[i] == 'Z' )
            {
                temp = (cipher[i] - 23);
                fprintf( fptr4 ,"%c", temp); 
            }
            else if( ( (cipher[i] <= 90) && (cipher[i] >= 65) ) || (cipher[i] <= 122) && (cipher[i] >= 97)  )
            {
                temp = (cipher[i] + 3);
                fprintf( fptr4 ,"%c", temp);
            }
            else
            {
                fprintf(fptr4, "%c", content[i]);
            }

            // printf("%c", cipher[i]);

        }
        
        
    }
    
    remove("cypher.txt");
    rename("copy.txt", "cypher.txt");

    fclose(fptr3);
    fclose(fptr4);    

}