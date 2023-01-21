#include <stdio.h>

//Your Instructor give you CL1002 quiz which contains 10 different questions of multiple choice,
//each of which has three possible solutions one is easy, one moderate and one of difficult level. The
//difficult solution carries three marks, moderate carry one mark and easy carries three marks. Write
//a program which reads your solution and returns the final score on the screen. As the quiz is MCQ’s
//based so you should enter the answer with range (1-3) only.
//1. Difficult choice
//2. Moderate choice
//3. Easy choice

//Q = 10
//d = 3
//m = 1
//e = 3

int main (){

	int i, marks;
	char choice;

	for(i=0 ; i < 10; i++){
		
		printf("\n Enter the the type of solution. ( D = difficult, M = moderate, E = easy) : ");
		scanf(" %c", &choice);
		
		switch(choice){
			
			case 'D' : 
				marks = marks + 3;
				break;
			case 'M' : 
				marks = marks + 1;
				break;
			case 'E' : 
				marks = marks + 3;
				break;
				
			default:
				printf("You entered an invalid value");
		}
		
		
	}
	
	printf("\n Your marks are : %d ", marks);
	
}