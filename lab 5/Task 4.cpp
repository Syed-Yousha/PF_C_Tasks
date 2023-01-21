#include<stdio.h>

int main(){
	int month = 0;
	
	printf("Enter the number of mont [1-12]: ");
	scanf("%d", &month);
	
	
	switch(month){
		case 1:
			printf("\n \t January: 31");
			break;
		case 2:
			printf("\n \t February: 29");
			break;
		case 3:
			printf("\n \t March: 31");
			break;
		case 4:
			printf("\n \t April: 30");
			break;
		case 5:
			printf("\n \t May: 31");
			break;
		case 6:
			printf("\n \t June: 30");
			break;
		case 7:
			printf("\n \t July: 31");
			break;
		case 8:
			printf("\n \t August: 31");
			break;
		case 9:
			printf("\n \t Septempber: 30");
			break;
		case 10:
			printf("\n \t October: 31");
			break;
		case 11:
			printf("\n \t November: 30");
			break;
		case 12:
			printf("\n \t December: 31");
			break;
		default:
			printf("\n \t Enter a valid month!");
			break;	
	}
	
	
}
