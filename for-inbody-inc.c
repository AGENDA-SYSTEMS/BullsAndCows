#include <stdio.h>

int main(void)
{
    int i;

    for(i=0; i<10;) {
        printf("%d", i);
        i++;
    }
    
    return 0;
}