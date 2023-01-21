#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 500

void sentence_case(char* text, int size);

int main()
{
    char text[500];

    printf("\nEnter a lowercase sentence: ");
    fgets(text, MAX_LIMIT, stdin);

    puts(text);

    int size = strlen(text);

    sentence_case(text, size);

    printf("\nSentence in uppercase: \n");
    puts(text);
}

void sentence_case(char* text, int size)
{
    int i, upper;
    for ( i = 0; i < size; i++)
    {
        if (i == 0)
        {
            upper = *(text + i) - 32;
            *(text + i) = upper;        
        }
        
        if ( *(text + i) == 46 && *(text + (i + 1)) == 32)
        {
            upper = *(text + (i + 2)) - 32;
            *(text + (i + 2)) = upper;
        }
        else if ( *(text + i) == 46 )
        {
            upper = *(text + (i + 1)) - 32;
            *(text + (i + 1)) = upper;
        }
        
    }
    
}