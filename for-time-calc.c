#include <stdio.h>

int main(void)
{
    int cacl_count;
    int s, v, t;

    printf("Eter how many trip time you want to calclulate: ");
    scanf("%d", &cacl_count);

    for(cacl_count; cacl_count>0; cacl_count--) {
        printf(" Enter S=: ");
        scanf("%d", &s);
        printf(" Enter V=: ");
        scanf("%d", &v);
        printf(" Time for trip is: %d", s/v);
        printf("\n");
    }
    return 0;
}