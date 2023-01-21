#include <stdio.h>

int main(){
	int num = 0;
	printf("Enter any number: ");
	scanf("%d", &num);
	
	if(num%7==0){
		printf("Number is multiple of 7 \n");
	}
	else{
		printf("\n\t Number is not multiple of 7 \n");
	}
}
