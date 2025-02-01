#include <conio.h>
#include <stdio.h>


int main(void)
{
    char ch;

    printf("Enter a character: ");
    //ch = getche();
    ch = getchar();
    printf("\nIts ASCII code is %d", ch);

    return 0;
}