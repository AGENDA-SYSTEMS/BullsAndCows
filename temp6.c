#include <stdio.h>

    #define LOWER 0   /*down temp limit*/
    #define UPPER 300 /*upper temp limit*/
    #define STEP  20  /*step size*/

/* print temperature comparison table ( Fahrenheit - Celsius)*/

void main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

