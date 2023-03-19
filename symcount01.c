#include <stdio.h>

/*Symbol count from input version 1*/
void main()
{
    long nc;

    nc = 0;

    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}