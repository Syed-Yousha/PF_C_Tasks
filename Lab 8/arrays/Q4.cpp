#include <stdio.h>
#include <string.h>
int main(){

    char first_name[30], last_name[30];
    
    printf("Enter your first name: ");
    scanf(" %s", &first_name);
    printf("Enter your Last name: ");
    scanf(" %s", &last_name);
    
    // Printing name & calculating name length 
    printf("\nFull name: %s %s", first_name, last_name);
    printf("\n\nname length: %d", strlen(first_name)+ strlen(last_name));


}