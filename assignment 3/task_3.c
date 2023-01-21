#include<stdio.h>
#include<stdlib.h>
struct yousha
	{
		char si[50];
		char n[50];
		int m1;
		int m2;
		int f;
		int ass;
		int q;
		
	}s[50];

	 // GPA  
   void gpa(int n)
   {
   	if(n>=90)
   	{
   		printf("\nGPA = 4 A+\n");
	}
    else if(n>=86 && n<=89)
   	{
   		printf("\nGPA = 4 A\n");
	}
	else if(n>=82 && n<=85)
   	{
   		printf("\nGPA = 3.67 A-\n");
	}
	else if(n>=78 && n<=81)
   	{
   		printf("\nGPA = 3.33 B+\n");
	}
	else if(n>=74 && n<=77)
   	{
   		printf("\nGPA = 3 B\n");
	}
	else if(n>=70 && n<=73)
   	{
   		printf("\nGPA = 2.67 B-\n");
	}
	else if(n>=66 && n<=69)
   	{
   		printf("\nGPA = 2.33 C+\n");
	}
	else if(n>=62 && n<=65)
   	{
   		printf("\nGPA = 2 C\n");
	}  
	else if(n>=58 && n<=61)
   	{
   		printf("\nGPA = 1.67 C-\n");
	}
	else if(n>=54 && n<=57)
   	{
   		printf("\nGPA = 1.33 D+\n");
	}
	else if(n>=50 && n<=53)
   	{
   		printf("\nGPA = 1 D\n");
	}
	else if(n<=49)
   	{
   		printf("\nFAIL F\n");
	}
   }
   
 // EVA  
   	void eva(int m)
    {
	int n;
	n=s[m].m1+s[m].m2+s[m].f+s[m].ass+s[m].q;
//	printf("\n\n%d",n); 
    printf("\nNAME = %s",s[m].n);
    printf("\nSTUDENT ID = %s",s[m].si);
    
	   gpa(n);
    }
    
// SMART FIND FUNCTION
    void smart(int r)
    {
            	printf("\nSTUDENT ID = %s",s[r].si);
				printf("\nNAME = %s",s[r].n);
				printf("\nMARKS OF MID 1 = %d",s[r].m1);
				printf("\nMARKS OF MID 2 = %d",s[r].m2);
				printf("\nFINAL MARKS = %d",s[r].f);
				printf("\nASSIGNMENT MARKS = %d ",s[r].ass);
				printf("\nQUIZ MARKS = %d",s[r].q);
				
	}

int main()
{
	
//	struct yousha s[50];
	int n,j=0,i=0,g,am1=0,am2=0,amf=0,ass1=0,aq=0,ats=0,ts[n],great,h=3;
	int count;
	char b[50],chck[50],chck1[50],n1[50];
	char v;
	

	
	printf("ENTER THE STUDENT ID FOR LOOP ");
	scanf("%s",&chck);
	
//FOR BREAKING ID

	for(int i=5; i<=7; i++)
	{  
	   
		b[j]=chck[i];
		j++;
	}
    printf("%s",b);
    
	n=atoi(b);
   printf("\nNO OF STUDENT IN CLASS  = %d\n",n);
   int f[1000];
// FOR DATA ENTERING

   for(int z=0; z<h; z++)
   {
   	count =0;
   	printf("ENTER THE ID OF STUDENT %d ",z+1);
   	scanf("%s",&s[z].si);
   	if(z==0)
   	{
   		printf("ENTER THE NAME ");
			scanf("%s",&s[z].n);
			printf("ENTER THE MID 1 MARKS ");
			scanf("%d",&s[z].m1);
			printf("ENTER THE MID 2 MARKS ");
			scanf("%d",&s[z].m2);
			printf("ENTER THE FINAL MARKS ");
			scanf("%d",&s[z].f);
			printf("ENTER THE ASSIGNMENT MARKS ");
			scanf("%d",&s[z].ass);
			printf("ENTER THE QUIZ SCORE ");
			scanf("%d",&s[z].q);
	}
   	else 
   	{   //  z=z-1;
   		 for(i=0; i<z; i++)
   	   {
   	   	  if((strcmp(s[z].si,s[i].si)==0))
   	   	  {
   	   	  	printf("\nSTUDENT ID EXIST ");
   	   	  	printf("\nPLEASE ENTER CORRECT ID OF STUDENT %d ",z+1);
   	   	  	scanf("%s",&s[z].si);
   	   	  	printf("ENTER THE NAME ");
			scanf("%s",&s[z].n);
			printf("ENTER THE MID 1 MARKS ");
			scanf("%d",&s[z].m1);
			printf("ENTER THE MID 2 MARKS ");
			scanf("%d",&s[z].m2);
			printf("ENTER THE FINAL MARKS ");
			scanf("%d",&s[z].f);
			printf("ENTER THE ASSIGNMENT MARKS ");
			scanf("%d",&s[z].ass);
			printf("ENTER THE QUIZ SCORE ");
			scanf("%d",&s[z].q);
			//break;
			count = 1;
			}
	   }
			if(count!=1)
			{

			printf("ENTER THE NAME ");
			scanf("%s",&s[z].n);
			printf("ENTER THE MID 1 MARKS ");
			scanf("%d",&s[z].m1);
			printf("ENTER THE MID 2 MARKS ");
			scanf("%d",&s[z].m2);
			printf("ENTER THE FINAL MARKS ");
			scanf("%d",&s[z].f);
			printf("ENTER THE ASSIGNMENT MARKS ");
			scanf("%d",&s[z].ass);
			printf("ENTER THE QUIZ SCORE ");
			scanf("%d",&s[z].q);
			}
			
			
	   
   	  
		  }
   }

// FOR CALCULATION
     printf("\nTHIS FLEX CAN DO THESE THINGS ");
     printf("\nENTER G FOR GPA OF SPECIFIC STUDENT ID ");
     printf("\nENTER A FOR PRINTING GPA OF ALL STUDENTS ");
     printf("\nENTER R FOR CORRECTING THE DATA ");
     printf("\nENTER F FOR FINDING THE DETAILS OF A STUDENT ");
     printf("\nENTER S FOR PRINTING STATISTICS OF THE CLASS ");
     scanf("\n%c",&v);
     
     switch(v)
     {
     	case 'g':
     	case 'G':
     		{
     			 printf("ENTER THE STUDENT ID FOR GPA ");
                  scanf("%s",&chck1);
     
                   for(i=0; i<h; i++)
                       {
                          	if((strcmp(chck1,s[i].si)==0))
                                	{
     	                            	eva(i);
	                             	}
	                    }
	            break;
			}
		case 'a':
		case 'A':
			{
				for(i=0; i<h; i++)
				{
					printf("\nSTUDENT %d\n",i+1);
					eva(i);
					
				}
				break;
			}
		case 'r':
		case 'R':
			{
				printf("ENTER THE INDEX NUMBER FOR THE DATA CORRECTION ");
				scanf("%d",&g);
				printf("ENTER THE STUDENT ID FOR INDEX %d ",g);
				scanf("%s",&s[g].si);
				printf("ENTER THE NAME FOR INDEX %d ",g);
				scanf("%s",&s[g].n);
				printf("ENTER THE MARKS OF MID 1 FOR INDEX %d ",g);
				scanf("%d",&s[g].m1);
				printf("ENTER THE MARKS OF MID 2 FOR INDEX %d ",g);
				scanf("%d",&s[g].m2);
				printf("ENTER THE FINAL MARKS FOR INDEX %d ",g);
				scanf("%d",&s[g].f);
				printf("ENTER THE ASSIGNMENT MARKS FOR INDEX %d ",g);
				scanf("%d",&s[g].ass);
				printf("ENTER THE QUIZ MARKS FOR INDEX %d ",g);
				scanf("%d",&s[g].q);
				break;
			}
		case 'f':
		case 'F':
			{
				printf("ENTER THE NAME OF A STUDENT OR STUDENT ID ");
				scanf("%s",&n1);
			    
				for(i=0; i<h; i++)
                       {
                          	if((strcmp(n1,s[i].n)==0)  || (strcmp(n1,s[i].si)==0))
                                	{
     	                            	smart(i);
	                             	}
	                    }	
	            break;        
			}
		case 's':
		case 'S':
			{
				printf("TOTAL COUNT = %d",n);
				for(i=0; i<h; i++)
				{ 
				    am1=am1+s[i].m1;	
				}
				am1=am1/h;
				printf("\nAVERAGE OF MID 1 = %d",am1);
				for(i=0; i<h; i++)
				{ 
				    am2=am2+s[i].m2;	
				}
				am2=am2/h;
				printf("\nAVERAGE OF MID 2 = %d",am2);
				for(i=0; i<h; i++)
				{ 
				    amf=amf+s[i].f;	
				}
				amf=amf/h;
				printf("\nAVERAGE OF FINAL = %d",amf);
				for(i=0; i<h; i++)
				{ 
				    ass1=ass1+s[i].ass;	
				}
				ass1=ass1/h;

				for(i=0; i<h; i++)
				{ 
				    aq=aq+s[i].q;
				    ts[i]=s[i].m1+s[i].m2+s[i].f+s[i].ass+s[i].q;
				}
				aq=aq/h;
				
				ats=am1+am2+amf+ass1+aq;
				printf("\nAVERAGE OF TOTAL SCORE = %d",ats);
				
				
		          for(i=0; i<h; i++)
	            	{ 
			          if(ts[0]<ts[i])
		                	{
			                    ts[0]=ts[i];
			                 	great=i;
		                	}
			
	            	}
		             printf("\nSTUDENT WITH ID %s HAS THE MAXIMUM SCORE OF %d",s[great].si,ts[0]);
		              printf("\nSTUDENTS WHO ARE FAIL:");
		         for(i=0; i<h; i++)
		         {
		         	f[i]=s[i].m1+s[i].m2+s[i].f+s[i].ass+s[i].q;
		         	if(f[i]<=49)
					 {
		         		printf("\n%s",s[i].si);
					 }
				 }
		            
	        }
			
	 }
    
}