#include <stdio.h>

int main(void)
{
    float gallons;

        printf("Enter gallons:\n ");
        scanf("%f", &gallons);

    while(gallons!=0) {

        printf("Liters for %f gallons are: %f\n", gallons, gallons * 3.7854);
        printf("Enter gallons: \n");
        scanf("%f", &gallons);
        printf("If you want to exit program enter 0.\n");
        
        
    }
    
    return 0;
}