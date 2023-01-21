#include <stdio.h>
#include <string.h>

int check(char name[30], char alpha);

int main(){
	
	char name[30], course[30], most_occured;
	char alpha[] = {"abcdefghijklmnopqrstuvwxyz"};
	int count=0, checker=0;
	
	printf("\nEnter your name: ");
	gets(name);
	printf("\nEnter your course: ");
	gets(course);
	
	strcat(name,course);
	
	for(int i; i < 5; i++){
	
		for(int j; j < 27; j++){
			
			checker = check(name, alpha[j]);
			
			if(checker > count){
				count = checker;
				most_occured = alpha[j];
			}
		}
		
	}
	printf("\n Character %c have the highest frequency of about %d ", most_occured, count);
	
	
}

int check(char name[30], char alpha){
	
	int count=0;

	for(int i=0; i< strlen(name); i++ ){
		
		if(name[i] == alpha){
			count++;
		}
	}
	
	return count;
}
