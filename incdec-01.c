#include <stdio.h>

int main(void)
{
    int i, j;

    i = 10;
    j = i++;
    /* това ще отпечата 11 10 */

    printf("i and j: %d %d ", i, j);

    return 0;
}