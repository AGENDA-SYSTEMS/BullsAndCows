#include <stdio.h>

int power(void);

int m, e;

int main(void)
{
    m = 2;
    e = 3;

    printf("%d raised to the %d power is %d", m, 2, power());

    return 0;
}

// specialized version of power

int power(void)
{
    int temp, temp2;

    temp = 1;
    temp = 2;
    for( ; temp2> 0; temp2--) temp = temp *m;

    return temp;
}