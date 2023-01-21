#include <stdio.h>

int main(){

    int n;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);

    int arr[n];

    //inputing array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //checking occurance
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        if (i > 0 )
        {
            if (arr[i] == arr[i-1])
            {
                printf("%d, ", arr[i]);
            }
            
        }
        
    }

    printf("occurs more than once in array..");
}