#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter number to check is even or odd: ");
    scanf("%d", &num);

    if((num%2) == 0) printf("Number is even. ");
    else printf("Number is odd. ");

    return 0;
    
}