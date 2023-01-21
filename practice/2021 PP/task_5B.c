#include <stdio.h>
#include <string.h>

void merge( char str[], int pos, char add[])
{
    int i, j;
    char new[1000];

    for ( i = 0; i < strlen(str); i++)
    {
        if ( i == pos )
        {
            strcat( new, add);
        }
        else
        {
            new[i] = str[i];
        }
        
    }

    strcpy(str, new);
}

int main()
{
    char str[1000], add[1000];
    int pos;

    printf("\nEnter the sentence: \n\n");
    scanf(" %[^\n]%*c", &str);

    printf("\nEnter the adding sentence: \n\n");
    scanf(" %[^\n]%*c", &add);

    printf("\n\nEnter the position: ");
    scanf("%d", &pos);

    merge( str, pos, add);
    printf("\nnew string: \n\n%s", str);
}