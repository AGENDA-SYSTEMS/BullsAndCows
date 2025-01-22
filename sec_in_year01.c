#include <stdio.h>

int main(void)
{
    int min, h, day, total_sec;

    min = 60 ;
    h = min * 60;
    day = h * 24;
    
    total_sec = day * 365;
    
    printf("Seconds in one year :%d", total_sec);

    return 0;
}