#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Pass array into FUNCTION
// int sum_arr(int *arr)
// {
//     int i;
//     int sum=0;
//     for ( i = 0; i < 5; i++)
//     {
//         sum += *(arr+i);
//     }
    
//     return sum;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5};

//     int sum = sum_arr(arr);

//     printf("\nSum is %d", sum);   
// }


//Return array from a function
// int * sequence(int * arr)
// {
//     int s_arr[5], i, n=4;

//     for ( i = 0; i < 5; i++)
//     {
//         s_arr[n] = *(arr + i);
//         n--;
//     }

//     for ( i = 0; i < 5; i++)
//     {
//         *(arr + i) = s_arr[i];
        
//     }
    
// }

// int main()
// {
//     int arr[] = {5,4,3,2,1};

//     sequence(arr);

//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
// }


//Recursion 
// int rec(int x)
// {
//     int f;

//     if (x == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         f = x * rec(x-1);
//     }
    
//     return f;
    
// }

// int main()
// {
//     int num = 5;

//    int factorial = rec(num);

//     printf("\nThe factorial is %d", factorial);
// }


//LCM 
// int lcm(int num1, int num2)
// {
//     int i = 2, res = 1;
//     while ( (num1 > 1) || (num2 > 1))
//     {
//         if ( ((num1 % i) == 0) && ((num2 % i) == 0))
//         {
//             res *= i;
//             num1 /= i;
//             num2/= i;
//         }
//         else if ((num1%i) == 0)
//         {
//             res *= i;
//             num1 /= i;
//         }
//         else if ((num2%i) == 0)
//         {
//             res *= i;
//             num2 /= i;
//         }
//         else
//         {
//             i++;
//         }
        
        
//     }
    
//     return res;
// }

// int main()
// {
//     int num1, num2, res;

//     printf("\nEnter the first number: ");
//     scanf("%d", &num1);
//     printf("\nEnter the second number: ");
//     scanf("%d", &num2);

//     res = lcm(num1, num2);

//     printf("\nThe lcm of number %d and %d is %d", num1, num2, res);
// }


// int main()
// {
//     // Type CASTING
//     char a[] = "123";
//     int sum;

//     sum =  atoi(a) + 2;

//     printf("%d", sum);
// }


//String return
// char func(char array[])
// {
//     strcat(array, "hehhehe");
    
// }

// int main()
// {
//     char array[] = "Hello world";

//     func(array);
//     puts(array);
// }


//Int
// int func(int array[])
// {
//     int i;
//     for ( i = 0; i < 4; i++)
//     {
//         array[i] += 1;
//     }
        
// }

// int main()
// {
//     int array[] = {1,2,3,4};

//     func(array);

//     int i;
//     for ( i = 0; i < 4; i++)
//     {
//         printf("%d ", array[i]);
//     }
// }


// 2d array into function
// const int N = 2;
// const int M = 2;

int func(int N ,int array[][N])
{
    
    int M = 2;
    int i, j;
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%d ", array[i][j]);
        }
        
    }

    int value[3][2] = {{1,2},{3,4},{5,6}};
    
    memcpy(array, value, sizeof(value));

    printf("\n\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < N; j++)
        {
            printf("%d ", array[i][j]);
        }
        
    }
}

int main()
{
    int array[2][2] = {{1,2},{3,4}};
    int N = 2;
    // printf("\nNumber of elements: ");
    // scanf("%d", &N);

    func(N ,array);

    return 0;
}


// matrix multiplication
// static int R1, C1, R2, C2;
// int multiply(int matrix1[R1][C1],int matrix2[R2][C2] )
// {
//     //  1 2     5 
//     //          7 

//     // printf("\n%d", R1);
//     int i, j, resultant[R1][C2], transpose[C1][R1], temp = 0;
//     for ( i= 0; i < R1; i++)
//     {
//         temp = 0;
//         for ( j = 0; j < C1; j++)
//         {
//             temp += *(*(matrix1 + i)+j) * *(*(matrix2 + j)+i);
//         }
        
//         printf("%d ", temp);
        
//     }
    
//     for ( i= 0; i < C1; i++)
//     {
//         for ( j = 0; j < R1; j++)
//         {
//             transpose[i][j] = matrix1[j][i];
//         }
        
//     }
    
       
// }

// int main()
// {
//     printf("\nEnter the number of rows for 1st matrix: ");
//     scanf(" %d", &R1);
    
//     printf("\nEnter the number of cols for 1st matrix: ");
//     scanf(" %d", &C1);
    
//     printf("\n\nEnter the number of rows for 1st matrix: ");
//     scanf(" %d", &R2);
    
//     printf("\nEnter the number of cols for 1st matrix: ");
//     scanf(" %d", &C2);
    
//     if ( C1 != R2)
//     {
//         printf("\nCannot multiply the matrix, invalid indexes!!");
//         exit(1);
//     }
    
//     // Taking matrix 
//     printf("\n\n");
//     printf("1st Matrix:\n");
//     int i, j, matrix1[R1][C1], matrix2[R2][C2];
//     for ( i = 0; i < R1; i++)
//     {
//         for ( j = 0; j < C1; j++)
//         {
//             printf("\nEnter Row#%d Col#%d element of matrix 1: ", i+1, j+1);
//             scanf("%d", &matrix1[i][j]);   
//         }
        
//     }

//     printf("\n\n2nd Matrix:\n");
//     for ( i = 0; i < R2; i++)
//     {
//         for ( j = 0; j < C2; j++)
//         {
//             printf("\nEnter Row#%d Col#%d element of matrix 2: ", i+1, j+1);
//             scanf("%d", &matrix2[i][j]);   
//         }
        
//     }

//     // Priting element matrix 1
//     printf("\n\nMatrix 1 Elements: \n");
//     for ( i = 0; i < R1; i++)
//     {
//         for ( j = 0; j < C1; j++)
//         {
//             printf("%d ", matrix1[i][j]);
              
//         }
//         printf("\n");
//     }   

//     // Priting element matrix 1
//     printf("\n\nMatrix 2 Elements: \n");
//     for ( i = 0; i < R2; i++)
//     {
//         for ( j = 0; j < C2; j++)
//         {
//             printf("%d ", matrix1[i][j]);   
//         }
//         printf("\n");
//     }

//     multiply(matrix1, matrix2);
// }