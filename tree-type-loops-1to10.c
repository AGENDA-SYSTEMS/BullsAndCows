#include <stdio.h>

int main(void)
{
    int i;
    for(i=1; i<11; i++) {
        printf("FOR LOOP: %d\n", i);
    }

    i = 0;
    
    while(i<11) {
        printf("WHILE LOOP: %d\n", i);
        i++;
    }

    i = 0;

    do {
        printf("DO WHILE LOOP: %d\n", i);
        i++;  
    } while(i<11);

    return 0;
}
    