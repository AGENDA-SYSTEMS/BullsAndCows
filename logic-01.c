#include <stdio.h>

int main(void)
{
    int i, j;
    printf("Enter first number: ");
    scanf("%d", &i);
    printf("Enter second number: ");
    scanf("%d", &j);

    /* операции за сравняване */
    printf("i < j %d\n", i < j);
    printf("i <= j %d\n", i <= j);
    printf("i == j %d\n ", i ==j);
    printf("i > j %d\n", i > j);
    printf("i >= j %d\n", i >= j );

    /* логически операции */
    printf("i && j %d\n", i && j);
    printf("i || j %d\n", i || j);
    printf("!i !j %d %d\n", !i, !j);

    return 0;
}