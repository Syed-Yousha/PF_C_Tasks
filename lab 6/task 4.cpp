#include <stdio.h>

// Re-write a program for considering the scenario of task-03 by using (Conditional Operator only).
// If you are asked to change both program for finding the minimum Pizza Price then what
// changes will be done to the code.


int main(){
	
	int np = 0, ch = 0, gk = 0;
	
	printf("Enter the price for Neapolitan pizza : ");
	scanf("%d", &np);
	printf("Enter the price for Chicago pizza : ");
	scanf("%d", &ch);
	printf("Enter the price for Greek pizza : ");
	scanf("%d", &gk);
	
	(np > ch && np > gk)? printf("Neapolitan pizza price is high : %d", np) : ((ch > np && ch > gk)? printf("Chicago pizza price is high : %d", ch): printf("greek pizza price is high : %d", gk));	
}