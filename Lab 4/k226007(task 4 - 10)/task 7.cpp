#include <stdio.h>
#include <math.h>

int main(){
    int x = 0;
    x = 8 + 4 * (7/3) - 2;
    printf("Question => 8 + 4 * (7/3) - 2 \n");
    printf("Ans => (7/3) \n");
    printf("Ans => 4 * Ans \n");
    printf("Ans => 8 + Ans \n");
    printf("Ans => Ans - 2 \n");
    printf("Ans => %d \n\n", x);


    x = 0;
    x = 3 % 3 + 3 * (3-3)/2;
    printf("Question => 3 % 3 + 3 * (3-3)/2 \n");
    printf("Ans => 3-3 \n");
    printf("Ans => Ans / 2 \n");
    printf("Ans => 3 * Ans \n");
    printf("Ans => 3 + Ans \n");
    printf("Ans => 3  Mod  Ans \n");
    printf("Ans => %d \n\n", x);


    x = 0;
    x = ( 4 *( 10 *( 4 +( 10 - 4 / (4)))));
    printf("Question => ( 4 *( 10 *( 4 +( 10 - 4 / (4))))) \n");
    printf("Ans => 4 / (4) \n");
    printf("Ans => 10 - Ans \n");
    printf("Ans => 4 + (Ans) \n");
    printf("Ans => 10 * (Ans) \n");
    printf("Ans => 4 * (Ans) \n");
    printf("Ans => %d \n\n", x);

    return 0;   
}