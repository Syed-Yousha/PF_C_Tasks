#include <stdio.h>

int main(){
	int temp = 0;
	
	printf("Enter the temperature: ");
	scanf("%d", &temp);
	
	if(temp > 104){
		printf("Go to doctor! \n ");
	}
	else{
		printf("You are normal \n ");
	}
}
