#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("Cube volume calculator \n");

    printf("Enter lenght of side A: ");
    scanf("%d", &a);

    printf("Enter lenght of side B: ");
    scanf("%d", &b);

    printf("Enter lenght of side C: ");
    scanf("%d", &c);

    printf("Volume = : %d", a*b*c);

    return 0;
}