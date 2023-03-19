/* program to check is expression getchar() != EOF is 0 or 1*/
#include <stdio.h>

void main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
        printf("\n getchar decimal value = %d", c);
    }
    printf("%d\n", c);
}
