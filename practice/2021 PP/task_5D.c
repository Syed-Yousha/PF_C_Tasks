#include <stdio.h>
#include <string.h>

void reverse(char[], int);

int main()
{
    char str[1000];
    printf("\nEnter the sentence: ");
    scanf(" %[^\n]%*c", str);

    reverse(str, strlen(str));
}

// int reverse(char str[])
// {
//     static int i = 0;
//     char temp[1000];
//     int x, j, k;

//     if (i == strlen(str)-1)
//     {
//         x = 0;
//         while (str[x] != '\0')
//         {
//             printf("%c", str[x]);
//             x++;
//         }
//         return  0;
//     }
//     else
//     {
//         x = 0;
//         while (str[x] != 32)
//         {
//             printf("%c", str[x]);
//             x++;
//         }

//         k = 0;
//         for ( j = x; j < strlen(str)-1; j++)
//         {
//             temp[k] = str[j];
//             k++;
//         }
//         strcpy( str, temp);
//         i++;
//         reverse(str);

//     }

// }

void reverse(char a[], int n)
{
    int st = n;
    int i;
    int en = st;
    while (1)
    {
        if (a[en] == '\0')
            break;
        else if (a[en] == ' ')
        {
            reverse(a, en + 1);

            break;
        }
        else
            en++;
    }
    for (i = st; i <= en; i++)
    {
        printf("%c", a[i]);
        if (a[i] == '\0')
            printf(" ");
    }
    return;
}