#include <stdio.h>
#include <string.h>

int main(){
	char stud1[1000], stud2[1000];
	int cmp_val;
	
	printf("Student#1 enter a string: ");
	gets(stud1);
	printf("Student#2 enter a string: ");
	gets(stud2);
	
	cmp_val = strcmp(stud1, stud2);
	
	if(cmp_val == 0){
		printf("\n both strings are equal");
	}else{
		if(strlen(stud1) > strlen(stud2)){
			printf("\nString #1 is greater than string #2");
		}else{
			printf("\nString #2 is greater than string #1");	
		}
	}
}

//char check(char stud1[1000],char stud2[1000]){
//	
//	
//	
//}
