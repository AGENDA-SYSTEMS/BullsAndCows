#include <stdio.h>

int main(void)
{
    int number;

    printf("Please enter number for SQRT: ");
    scanf("%d", &number);

    printf("Number %d square = %d", number, number*number);

    return 0;
}