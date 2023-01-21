#include <stdio.h>
#include <math.h>

int main(void){
    
    double a = 4;
    double b = 8;
    float z = 0;

    z = (sqrt(a) + pow(a, b) + cbrt(a));    
    printf("the value of z is %f", z);
}

