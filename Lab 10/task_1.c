#include<stdio.h>

void swap(int* aPtr, int* bPtr, int* cPtr);

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    swap( &a, &b, &c);

    printf("\n a = %d \n b = %d \n c = %d", a, b, c);


}

void swap(int* aPtr, int* bPtr, int* cPtr)
{
    int temp;
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = *cPtr;
    *cPtr = temp;

}