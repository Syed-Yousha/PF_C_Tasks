# include <stdio.h>
# include <math.h>

int main(){
	
	int hours = 0;
	int mins = 0;
	int secs = 0;
	int weeks = 17;
	
	hours = 3 * weeks;
	mins = hours * 60;
	secs = mins * 60;
	
	printf("hours spent through out semester in CL002 lab => %d hours \n", hours);
	printf("minutes spent through out semester in CL002 lab => %d mins \n", mins);
	printf("seconds spent through out semester in CL002 lab => %d secs \n", secs);
	
	return 0;	
}
