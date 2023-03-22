#include <stdio.h>

/*program to produce histogram - based on how many times digitst from 0 to 9 are typed*/
/*  version 2.0 */

void main()
{
    int c, i, j;
    int ndigit[10];

    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= ndigit[i]; ++j)
        {
            if (ndigit[i] != 0)
                printf("=");
        }
        if (ndigit[i] != 0)
            printf("%d\n", i);
    }
}