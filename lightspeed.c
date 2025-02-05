#include <stdio.h>

int main(void)
{
    unsigned long int lightspeed = 300000;
    unsigned long int time;

    printf("Enter time in seconds for light travel\n");
    scanf("%lu", &time);

    printf("Distance in KM is: %lu\n", time * lightspeed);

}