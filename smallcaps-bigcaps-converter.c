#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;

    do {
        ch = getche();
        printf("\n%c", ch - 32);
        printf("\n");
    } while(ch != '\r');

    return 0;
}