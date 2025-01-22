#include <stdio.h>

void moon_w(float weight);

int main(void)
{   
    float weight;

    printf("Enter your weight on Earth: ");
    scanf("%f", &weight);
    
    moon_w(weight);
    
    return 0;
}

void moon_w(float weight)
{
    printf("Your weight on Monn is = %f", ((weight/100) * 17));
    return;
}