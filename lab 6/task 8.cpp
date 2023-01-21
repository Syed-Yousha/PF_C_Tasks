#include <stdio.h>

// Write a program that displays the area of a square, rectangle, right-angle triangle,
// parallelogram, or a circle based on the user’s choice. If the user enters 0, the program should
// read the side of the square and display its area. If the user enters 1, the program should read
// the radius of the circle and display its area.

int main(){

    int choice=0, width=0, hieght=0;
    float rad;

    printf(" 0: square \n 1: circle \n 2: Rectangle \n 3: Right-angle Triangle \n 4: Parallelogram  \n\n =>   ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 0:
        
        printf("Enter the height of the square : ");
        scanf("%d", &hieght);

        printf("Area of sqaure => %d ", hieght*4);
        break;
    
    case 1:
        
        printf("Enter the radius of circle : ");
        scanf("%f", &rad);

        printf("Area of circle => %f ", 3.14*rad*rad);
        break;
    
    case 2:
        
        printf("Enter the width and height of rectangle : ");
        scanf("%d %d", &width, &hieght);

        printf("Area of rectangle => %d ", width*hieght);
        break;

    case 3:
        
        printf("Enter the length and breadth of triangle : ");
        scanf("%d %d", &hieght, &width);

        printf("Area of triangle => %d ", (hieght*width)/2 );

        break;
    
    case 4:
        
        printf("Enter the width and length of Parrallelogram : ");
        scanf("%d %d", &width, &hieght);

        printf("Area of Parrallelogram => %d ", width*hieght);

        break;
    
    default:

        printf("You entered an invalid value!");
        break;
    }

}