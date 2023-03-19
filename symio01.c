#include <stdio.h>

/* copy input into output version 1.0 */

void main()
{
    int c;

    c = getchar();
    while (c != EOF){
        putchar(c);
        c = getchar();
    }
}