#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// YASIR BINISH GAME
char remover(int n, char str[])
{
    int i, j = 0, len = strlen(str);
    char temp[len];

    for (i = n; i < len; i++)
    {
        str[i] = str[i + 1];
    }
}

int main()
{
    int n;
    printf("\nEnter the number of elements in the string: ");
    scanf(" %d", &n);

    char str[n];
    printf("\nEnter the string ('y' for Yellow and 'b' for blue): ");
    scanf(" %s", str);

    int index, i;
    for (i = 0; i < n; i++)
    {
        printf("\nstring is => %s", str);
        if ((i % 2) == 0)
        {
            printf("\nPlayer 1 turn to enter index number: ");
            scanf("%d", &index);

            if ( (str[index-1] != 'y') || (str[index+1] != 'y'))
            {
                printf("\nPlayer two won the game!!");
                exit(0);
            }
            else
            {
                remover(index, str);
            }
            
        }
        else
        {
            printf("\nPlayer 2 turn to enter index number: ");
            scanf("%d", &index);
            
            if ( (str[index-1] != 'b') || (str[index+1] != 'b'))
            {
                printf("\nPlayer one won the game!!");
                exit(0);
            }
            else
            {
                remover(index, str);
            }
        }
    }
}
