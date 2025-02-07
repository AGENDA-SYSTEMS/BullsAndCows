#include <stdio.h>

int main(void)
{
    int i;
    float f;

    f = 1234.0098;
    i = f; // casting float into int

    printf("%f %d", f, i);

    return 0;
}