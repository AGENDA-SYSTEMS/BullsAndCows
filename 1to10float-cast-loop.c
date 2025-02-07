#include <stdio.h>

int main(void)
{
    float i;

    for(i=0.0;(int)i<=100;i+=0.1) {
        printf("%.1f\n", i);
    }

    return 0;
}