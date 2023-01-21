#include <stdio.h>

int main(){
	char grade = 'a';
	printf("Enter you grade: ");
	scanf("%c", &grade);
	
	switch(grade){
		case 'A':
			printf("\n \t Your marks are equalent to 86 and grade point are 4.00");
			break;
		case 'B':
			printf("\n \t Your marks are equalent to 74 and grade point are 3.00");
			break;
		case 'C':
			printf("\n \t Your marks are equalent to 62 and grade point are 2.00");
			break;
		case 'D':
			printf("\n \t Your marks are equalent to 50 and grade point are 1.00");
			break;
		default:
			printf("\n \t Better luck next time!");
			break;
			
	}
}
