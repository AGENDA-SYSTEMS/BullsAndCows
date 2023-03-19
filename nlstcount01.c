#include <stdio.h>
/* program to count new lines, tabulation and space */

void main()
{
    int c, nl, tab, space;

    nl = 0, tab = 0, space = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
        if (c == '\t')
        {
            tab++;
        }
        if (c == ' ')
        {
            space++;
        }
        printf("\n");
        printf("Lines count = %d\n", nl);
        printf("Tab count   = %d\n", tab);
        printf("SPACE count = %d\n", space);
    }
}