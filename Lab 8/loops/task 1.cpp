#include <stdio.h>

int main(){

    int num, root=0, root1=0, count=0;

    printf("\nEnter a four digit number: ");
    scanf("%d", &num);

    if (num > 999)
    {
        
        while (num > 0)
        {
            root += num%10;
            num = num/10;
            count++;

            if (num <= 0 && root > 9)
            {
                while (root > 0)
                {
                    root1 += root%10;
                    root = root / 10;
                }
                root = root1;   
            }
            

        }

        printf("\nTotal digits in number: %d", count);
        printf("\nThe digital root of number: %d", root);

    }else
    {
        printf("\nPlease enter a four digits number!");
    }
    
    

}
