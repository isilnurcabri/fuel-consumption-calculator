
#include <stdio.h>
int main(){
    float distance,fuel_consumed,fuel_price,consumption,cost;
    printf("Distance (km): ");
    scanf("%f",&distance);
    printf("Fuel consumed (lt): ");
    scanf("%f",&fuel_consumed);
    printf("Fuel price (tl): ");
    scanf("%f",&fuel_price);
    if(distance>0 && fuel_consumed>0){
        consumption = fuel_consumed/distance;
        printf("Consumption: %f ",consumption);
         cost = fuel_price*fuel_consumed;
        printf("Cost : %f",cost);
        if(consumption<0.10){
            printf("Very economical");
        }
        else if(consumption >= 0.10 && consumption <= 0.20){
            printf("Normal");
        }
        else{
            printf("High fuel consumption");
        }
    }
    else{
        printf("Invalid input!");
    }

    return 0;
}
