#include <stdio.h>
#include <math.h>

int main(void)
{
    double i;

    for(i=0; i<101; i++) {
        printf("The square root of %lf is if\n", i, sqrt(i));
        printf("Whole number part: %d ", (int)sqrt(i));
        printf("Fractional part: %lf\n", sqrt(i)-(int)sqrt(i));

        printf("\n");
    }

    return 0;
}