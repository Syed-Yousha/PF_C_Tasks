#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;

    printf("\nEnter the number of characters in your name: ");
    scanf(" %[^\n]%*c", &n);
    char *ptr = (char *)malloc(n * sizeof(int));

    printf("\nEnter your full name: ");
    scanf(" %[^\n]%*c", ptr);

    printf("\n %s", ptr);

    free(ptr);
}