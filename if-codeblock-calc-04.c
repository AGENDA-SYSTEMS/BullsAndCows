#include <stdio.h>

int main(void)
{
    int op, num1, num2;

    printf("Enter 1: for sum, 2: for subst ");
    scanf("%d", &op);

    if(op == 1) {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Sum is: %d", num1 + num2);
    }else {
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);
        printf("Subst is: %d", num1 - num2);
    }

        return 0;
    }

