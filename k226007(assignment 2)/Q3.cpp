#include <stdio.h>

int main(){

    int num, digits, n;
    char choice;

    printf("\n Enter if you want to Decrypt(D) or Encrypt(E): ");
    scanf(" %c", &choice);    
    
    if (choice == 'E') {
        
        printf("\n Enter a positive number: ");
        scanf(" %d", &num);

        printf("\n");
        while ( num > 0)
        {
            digits = num%10;
            num = num/10;
            
            switch (digits)
            {
                case 0:
                    printf("A");
                    break;
                case 1:
                    printf("B");
                    break;
                case 2:
                    printf("C");
                    break;
                case 3:
                    printf("D");
                    break;
                case 4:
                    printf("E");
                    break;
                case 5:
                    printf("F");
                    break;
                case 6:
                    printf("G");
                    break;
                case 7:
                    printf("H");
                    break;
                case 8:
                    printf("I");
                    break;
                case 9:
                    printf("J");
                    break;
                default:
                    printf("You entered an invalid value");
                    break;
            }

        }

    }
    else if(choice == 'D')
    {
        int n;

        printf(" Enter the numbers of letters you want to decrypt: ");
        scanf("%d", &n);

        char message[n];

        printf(" Enter the encrypted message(A-J): ");
        scanf(" %s", &message);

        printf("\n");
        for (int i = n-1; i >= 0; i--)
        {
            switch (message[i])
            {
                case 'A':
                    printf(" 0");
                    break;
                case 'B':
                    printf(" 1");
                    break;
                case 'C':
                    printf(" 2");
                    break;
                case 'D':
                    printf(" 3");
                    break;
                case 'E':
                    printf(" 4");
                    break;
                case 'F':
                    printf(" 5");
                    break;
                case 'G':
                    printf(" 6");
                    break;
                case 'H':
                    printf(" 7");
                    break;
                case 'I':
                    printf(" 8");
                    break;
                case 'J':
                    printf(" 9");
                    break;
                default:
                    printf("\n You entered an invalid value!");
                    break;
            }
        }
        
    }else
    {
        printf("\n You entered an invalid digit!");
    }
    

}