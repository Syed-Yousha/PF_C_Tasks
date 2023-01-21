#include <stdio.h>
#include <math.h>

int main(){

    int budget = 40000000;
    // four flours 
    // 10 rooms
    int room_sq_meter = 44;
    int room_sq_feet = 0;
    int total_area = 0;
    int total_cost = 0;

    room_sq_feet = room_sq_meter * 10.7639;
    total_area = room_sq_feet * 40;
    total_cost = 500000 * 40;

    printf("room area in square feets => %d square feet \n", room_sq_feet);
    printf("All room area in square feets => %d square feet \n", total_area);
    printf("Cost of all rooms => %d PKR \n\n", total_cost);
    
    
    if(budget > total_cost){
        printf("Everything is good! Budget is enough. \n");
    }
    else
    {
        printf("Budget is not enough. budget is %d PKR less than Total cost.", total_cost - budget );    
    }
    
    return 0;
}