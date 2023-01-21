#include <stdio.h>
#include <math.h>

int main(){

    int lsd, N;

    printf("Enter the LSD Numbers. it should be between (0 - 4) : ");
    scanf("%d", &lsd);


    if ( lsd == 0 )
    {
        N = 4+3; // locations when LSD is 0
        printf("\nNumber of Robots in the field are %d", N);
    }else if ( (lsd > 0) && (lsd < 4) )
    {
        N = (pow(2, lsd)) * 2;
        printf("\nNumber of Robots in the field are %d", N);
    }else
    {
        printf("\nYou entered an invalid value..!");
    }
    
    // Calculating distance
    int i=1, r_x=1, r_y=3;
    float  dist, x, y;

    while (i <= N)
    {
        printf("\n\nEnter the 'x' co-ordinate of location# %d in meters: ", i);
        scanf("%f", &x);
        printf("\nEnter the 'y' co-ordinate of location# %d in meters: ", i);
        scanf("%f", &y);

        dist = sqrt( pow(x - r_x, 2) + pow(y - r_y, 2) );

        printf("\n\tThe distance between UAV and Robot# %d is => %f meters", i, dist);
        i++;
    }
    
    return 0;
}