#include <stdio.h>

int main(){
	int time = 0;
	
	printf("Enter the time (24 hour format): ");
	scanf("%d", &time);
	
	if(time <= 24){
		if(time>=18){
			printf("Robotics Students good night \n");
		}
		else if(time >= 12){
			printf("Robotics Students good evening \n");	
		}
		else if(time >= 5){
			printf("Robotics Students good morning \n");	
		}
		else{
			printf("Time should be greater or equals to 5 \n");	
		}
	}
	else{
		printf("Enter a valid time!");
	}
}
