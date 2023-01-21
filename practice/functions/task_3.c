// // Write a C programming to find out maximum and minimum of some values using function which will return an array

// #include <stdio.h>

// int find_min(int num[]);
// int find_max(int num[]);

// int main()
// {
//     int num[5] = {11,22,1,44,123};

//     int min = find_min(num);
//     int max = find_max(num);

//     printf("\nmax is %d", max);
//     printf("\nmin is %d", min);
// }

// int find_min(int num[])
// {
//     int i, min = 10000;
//     for ( i = 0; i < 5; i++)
//     {
//         if ( *(num + i) < min)
//         {
//             min = *(num + i);
//         }
        
//     }
//     return min;
// }

// int find_max(int num[])
// {
//     int i, max = -10000;
//     for ( i = 0; i < 5; i++)
//     {
//         if ( *(num + i) > max)
//         {
//             max = *(num + i);
//         }
        
//     }

//     return max;
// }

# include <stdio.h>
# define max 10
int *maxmin(int ar[], int v);
int main()
{
  	int  arr[max];
	int n,i, *p;
  	printf("Number of values you want to input: ");
  	scanf("%d",&n);
  	printf("Input %d values\n", n);
  	for(i=0;i<n;i++)
    		scanf("%d",&arr[i]);
  	p=maxmin(arr,n);
	printf("Minimum value is: %d\n",*p++);
	printf("Maximum value is: %d\n",*p);
}
int *maxmin(int arra1[], int v)
{
 	int i;
	static int result_mm[2];
	result_mm[0]=arra1[0];
	result_mm[1]=arra1[0];
	for (i=1;i<v;i++)
	{
		if(result_mm[0] > arra1[i])
    			result_mm[0]=arra1[i];
		if(result_mm[1]< arra1[i])
  			result_mm[1]= arra1[i];
	}
	return result_mm;
}
