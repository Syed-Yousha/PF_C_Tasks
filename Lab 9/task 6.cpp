#include <stdio.h>
#include <string.h>

int volume_cal(int h, int a){
	
	int volume = ((a * a)/3) * h;
	return volume;
}


int get_data(int h, int a){
	
	int volume;
	
	volume = volume_cal(h, a);
	
	return volume; 
}

int main(){
	
	int h, a;
	int volume;
	
	printf("\nEnter the value pyramid height: ");
	scanf(" %d", &h);
	printf("\nEnter the area of Pyramid base: ");
	scanf(" %d", &a);
	
	volume = get_data(h , a);
	
	printf("\nVolume is %d ", volume);
	return 0;
}
