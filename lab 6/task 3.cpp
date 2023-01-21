#include <stdio.h>

// Re-write a program for considering the scenario of task-03 by using (Conditional Operator only).
// If you are asked to change both program for finding the minimum Pizza Price then what
// changes will be done to the code.

int main(){
	
	int neapolitan = 0, chicago = 0, greek = 0;
	
	printf("Enter the price for Neapolitan pizza : ");
	scanf("%d", &neapolitan);
	printf("Enter the price for Chicago pizza : ");
	scanf("%d", &chicago);
	printf("Enter the price for Greek pizza : ");
	scanf("%d", &greek);
	
	if (neapolitan > chicago && neapolitan > greek ){
		printf("Neapolitan pizza price is high : %d", neapolitan);
	}else if( chicago > neapolitan && chicago > greek){
		printf("Chicago pizza price is high : %d", chicago);	
	}else{
		printf("greek pizza price is high : %d", greek);	
	}
	
	
}