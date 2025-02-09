#include <stdio.h>

int main(void)
{
    char x;

    printf("Enter x: ");    
    scanf("%c", &x);

    switch (x)
    {
    case 'A': printf("is an A");
        break;
    case 65 : printf("is the number 65");
    }

}