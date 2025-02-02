#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i;
    char ch;

    ch = 'a';// ch start value

    for(i=0; ch !='q'; i++) {
        printf("pass: %d\n", i);
        ch = getche();
    }

    return 0;
}