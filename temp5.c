#include <stdio.h>
/* Inverted order Print Fahrenheit to Celsius comparsion table*/
/* from 300 to 0 */

void main()
{
    int fahr;

    for (fahr = 300; fahr >=0 ; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
