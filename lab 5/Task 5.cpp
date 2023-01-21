#include<stdio.h>

int main(){
	
	int amount = 0;
	int val = 0;
	printf("Enter the amount: ");
	scanf("%d", &amount);
	
	if(amount/5000){
		val = amount/5000;
		amount = amount - (5000 * val);
		printf("5000 => %d", val);
	}
	if(amount/1000){
		val = amount/1000;
		amount = amount - (1000 * val);
		printf("1000 => %d \n", val);
	}
	if(amount/500){
		val = amount/500;
		amount = amount - (500 * val);
		printf("500 => %d \n", val);
	}
	if(amount/100){
		val = amount/100;
		amount = amount - (100 * val);
		printf("100 => %d \n", val);
	}
	if(amount/50){
		val = amount/50;
		amount = amount - (50 * val);
		printf("50 => %d \n", val);
	}
	if(amount/20){
		val = amount/20;
		amount = amount - (20 * val);
		printf("20 => %d \n", val);
	}
	if(amount/10){
		val = amount/10;
		amount = amount - (10 * val);
		printf("10 => %d \n", val);
	}
	if(amount/5){
		val = amount/5;
		amount = amount - (5 * val);
		printf("5 => %d \n", val);
	}
	if(amount/2){
	}
		val = amount/2;
		amount = amount - (2 * val);
		printf("2 => %d \n", val);
	}
	if(amount/1){	 
		val = amount/1;
		amount = amount - (1 * val);
		printf("1 => %d \n", val);
	}
}
