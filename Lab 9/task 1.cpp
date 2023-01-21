#include <stdio.h>
#include <string.h>

void name_rev(){
	
	char first[30], last[30];
	
	printf("Enter your first name: ");
	gets(first);
	printf("\nEnter your last name: ");
	gets(last);
	
	printf("\n reverse name is => %s %s", strrev(first), strrev(last));
}

int main(){
	
	name_rev();
}