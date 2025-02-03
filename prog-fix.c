#include <stdio.h>

int main(void)
{
    int i, j, k;

    for(i=0; i<10; i++) {
        printf("Enter first number: ");
        scanf("%d", &j);

        printf("Enter second number: ");
        scanf("%d", &k);

        if(k) printf("%d\n", j/k);
        else printf("cannot divide by zero\n");
    }

    return 0;
}