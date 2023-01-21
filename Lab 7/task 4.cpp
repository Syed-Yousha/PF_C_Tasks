#include <stdio.h>

int main(){
	
	char choice, level, terminate;
	int tickets, i, price=0,seats=500, sold=0, income=0;
	
	
	while(sold != 500){
		
		do{
		
			printf("\n\n Do you want to buy a ticket. type(Y) if you want to buy ticket, else(N): ");
			scanf(" %c", &choice);
			
			switch(choice){
				
				case 'Y':
					printf("\n How many tickets you want to buy?: ");
					scanf("%d", &tickets);

					i = 0;
					while (i < tickets)
					{
						printf("\n\n Are you a senior(S) or a junoir(J): ");
						scanf(" %c", &level);
						
						switch(level){
							case 'S':
								price = 100;
								i++;

								income = income + price;
								sold++;
								seats--;
								printf("\n You successfully buyed a tickets ....");
								printf("\n Available seats are: %d", seats);
								printf("\n tickets sold are: %d", sold);
								break;
							
							case 'J':
								price = 50;
								i++;

								income = income + price;
								sold++;
								seats--;
								printf("\n You successfully buyed a tickets ....");
								printf("\n Available seats are: %d", seats);
								printf("\n tickets sold are: %d", sold);
								break;
							
							default:
								printf("\n You entered an invalid level!");
								break;
						}
						
					}
					
					printf("\n Please enter 'T' to terminate the program: ");
					scanf(" %c", &terminate);
										
					break;
				
				case 'N':
					printf("\n Thankyou for visiting us!");
					terminate = 'T';
					break;
					
				default:
					printf("You entered an invalid!");
					terminate = 'T';
					break;
			}
			
			printf("\n total income generated is: %d", income);
		
		}while(terminate != 'T');
		
		
	}
	
}
