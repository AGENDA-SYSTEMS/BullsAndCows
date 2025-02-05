#include <stdio.h>

int main(void)
{
    short int i; /* signed short int*/
    unsigned short int u; /* signed short int */

    u = 33000;
    i = u;

    printf("%hd, %hu", i, u);

    return 0;
}