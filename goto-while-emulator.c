#include <stdio.h>

int main(void)
{
    int i = 1;

    one2ten:
        printf("%d ", i);
        i++;
        if(i<11) goto one2ten;

    return 0;    
}