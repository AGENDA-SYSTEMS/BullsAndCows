#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[80];
    char revstr[80];
    int i, len;

    printf("Enter stirng to be reversed: ");
    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++)
        revstr[i] = str[len - 1 - i];

    printf("%s\n", revstr);

    return 0;
}