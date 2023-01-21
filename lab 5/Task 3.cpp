#include <stdio.h>

int main(){
	int month = 0;
	
	printf("Enter the number of mont [1-12]: ");
	scanf("%d", &month);
	
	if(month>0 && month < 13){
		if(month >= 1 && month < 3){
			printf("\n \t Winters");
		}
		else if(month >= 3 && month < 5){
			printf("\n \t Spring");
		}
		else if(month >= 5 && month < 9){
			printf("\n \t Summers");
		}
		else if(month >= 9 && month < 10){
			printf("\n \t Autumn");
		}
		else{
			printf("\n \t Winter");
		}
	}
	else{
		printf("\n \t Enter a valid month!");
	}
}
