# include <stdio.h>
# include <math.h>

int main(){
	int site1, gas1, hotel1, meal1;
	int site2, gas2, hotel2, meal2;
	
	printf("Enter the price of gas for site 1:\n");
	scanf("%d", &gas1);
	
	printf("Enter the price of hotel for site 1: \n");
	scanf("%d", &hotel1);
	
	printf("Enter the price of meal for site 1: \n");
	scanf("%d", &meal1);
	
	printf("Enter the price of gas for site 2: \n");
	scanf("%d", &gas2);
	
	printf("Enter the price of hotel for site 2: \n");
	scanf("%d", &hotel2);
	
	printf("Enter the price of meal for site 2 \n");
	scanf("%d", &meal2);
	
	site1 = gas1+hotel1+meal1;
	site2 = gas2+hotel2+meal2;
	
	printf("Site 1 total cost => %d\n", site1);
	printf("Site 2 total cost => %d\n\n", site2);
	
	if( site1 > site2){
		printf("\t You should Go to site 1 \n");
	}
	else{
		printf("\t You should Go to site 1 \n");
	}
}
