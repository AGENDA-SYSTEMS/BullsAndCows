#include <stdio.h>

int main(void)
{
    int num1, num2, operand;

    printf("Please enter first number: ");
    scanf("%d", &num1);

    printf("Please enter second number: ");
    scanf("%d", &num2);

    printf("1 - sum, 2 - mul: ");
    scanf("%d", &operand);

    if(operand == 1) printf("sum of first and second number is: %d", num1 + num2);
    else printf("First and second number mul is: %d", num1 * num1);

    return 0;
    
}