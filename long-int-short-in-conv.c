#include <stdio.h>

int main(void)
{
    short int si;
    long int li;

    li = 100000;
    si = li; // casting into short int

    printf("%hd", si);

    return 0;
}