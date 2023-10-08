#include <stdio.h>
/* program to convert Fahrenheit to Cesius with custom written function v2 */
int Au;


float tconv(float f);

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    printf("****Fahrenheit - Celsius table****\n");
    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, tconv(fahr));
        fahr = fahr + step;
    }
}

float tconv(float f)
{
    float c;
    c = (5.0 / 9.0) * (f - 32);
    return c;
}