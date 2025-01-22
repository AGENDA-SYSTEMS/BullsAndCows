#include <stdio.h>

float o_to_c(float oz);

int main(void)
{   
    float oz;
    printf("Enter OZ: ");
    scanf("%f", &oz);
    printf("Cups for %d oz = %f", oz, o_to_c(oz));

    return 0;
}

float o_to_c(float oz)
{
    return oz / 8;
}