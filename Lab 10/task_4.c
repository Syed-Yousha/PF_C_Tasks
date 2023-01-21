#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 500

int word_count(char* text, int size);

int main()
{
    char text[500];
    int words, size;
    printf("\nEnter any sentence: ");
    fgets(text, MAX_LIMIT, stdin);

    size = strlen(text);

    words = word_count(text, size);
    printf("\nnumber of words in the sentence => %d", words);
}

int word_count(char* text, int size)
{
    int i, words=0;

    for ( i = 0; i < size; i++)
    {
        if ( *(text + i) == 32)
        {
            words++;
        }
        
    }

    return words + 1;
    
}