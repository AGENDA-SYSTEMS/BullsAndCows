#include <stdio.h>

int main(void)
{
    int i;

    i = 0;

    i++;
    printf("%d ", i); /* print 1*/
    i--;
    printf("%d ", i); /* print 0*/

    return 0;
}