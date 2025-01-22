#include <stdio.h>

int main(void)
{
    int num;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter an float: ");
    scanf("%f", &f);

    printf("%d\n", num);
    printf("%f\n", f);

    return 0;
}