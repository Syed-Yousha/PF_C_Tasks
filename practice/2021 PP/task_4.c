#include <stdio.h>

struct data
{
    float op1;
    float op2;
    char opt;
};

float basic(float, char, float);

void display(const struct data, int);

double dot( double vector_A[], double vector_B[], int n);

int main()
{
    
    char terminate = 'a';
    do
    {

        char choice;

        printf("\nEnter the choice \n(a). Solving equation \n(b). Dot product \n\n: ");
        scanf(" %c", &choice);

        // Solving Equation
        if ( choice == 'a' )
        {
            int opps, i;
            printf("\nEnter how many operand will expresion have: ");
            scanf("%d", &opps);

            struct data eq[opps];
            float res;

            // Taking input and Calculating Result
            for ( i = 0; i < opps-1; i++)
            {
                if (i == 0)
                {
                    printf("\nEnter the operand %d: ", i+1);
                    scanf("%f", &eq[i].op1);

                    printf("\nEnter the operator: ");
                    scanf(" %c", &eq[i].opt);

                    printf("\nEnter the operand %d: ", i+2);
                    scanf("%f", &eq[i].op2);

                    res = basic(eq[i].op1, eq[i].opt, eq[i].op2);
                    // printf(" %f", res);
                }
                else
                {
                    eq[i].op1 = res;

                    printf("\nEnter the operator: ");
                    scanf(" %c", &eq[i].opt);
                
                    printf("\nEnter the operand %d: ", i+2);
                    scanf("%f", &eq[i].op2);

                    res = basic(eq[i].op1, eq[i].opt, eq[i].op2);
                }
            }

            // Display
            printf("\nThe solution of equation is: \n\n");
            for ( i = 0; i < opps-1 ; i++)
            {
                display(eq[i], i);
            }   
            printf(" = %f", res);
        
        }
        else
        {
            // Dot product

            int n, i;
            printf("\nEnter the number of elements in your vector: ");
            scanf("%d", &n);

            double vector_A[n], vector_B[n], product;

            for ( i = 0; i < n; i++)
            {
                printf("\nEnter the value #%d of vector A: ", i+1);
                scanf("%lf", &vector_A[i]);

                printf("\nEnter the value #%d of vector B: ", i+1);
                scanf("%lf", &vector_B[i]);
            }
            
            // for ( i = 0; i < n; i++)
            // {
            //     product += dot(vector_A[i], vector_B[i], i);
            // }
            
            product = dot(vector_A, vector_B, n);

            printf("\n\nDot product of vector A.B = %lf ", product);



        }
        
        

        // Termination
        printf("\n\nPress any key to continue the program,\nOr, press 'e'/'E' to terminate the program: \n\n");
        scanf(" %c", &terminate);
        
        if (terminate == 'e' || terminate == 'E')
        {
            break;
        }
        else
        {
            continue;
        }
        
        
    }
    while (1);   
       
}

float basic(float op1, char opt, float op2)
{
    float res;

    switch (opt)
    {
    case '/':
        res = op1 / op2;
        break;
    case '*':
        res = op1 * op2;
        break;
    case '+':
        res = op1 + op2;
        break;
    case '-':
        res = op1 - op2;
        break;
    
    default:
        printf("\nYou entered an invalid value!");
        break;
    }

    return res;
}

void display(const struct data eq, int i)
{
    int op1 = (int)eq.op1;
    int op2 = (int)eq.op2;
    if (i == 0)
    {
        printf("%d %c %d", op1, eq.opt, op2);
    }
    else
    {
        printf(" %c %d", eq.opt, op2);
    }
    
    
}

double dot( double vector_A[], double vector_B[], int n)
{

    int i, product = 0;
    for ( i = 0; i < n; i++)
    {
        product = product + (vector_A[i] * vector_B[i]);
        // printf("\n%lf", vect)
    }
    
    return product;
}
