#include <stdio.h>

int main(void)
{
    printf("%hd ", 42340); // not working correctly

    printf("%f ", 2309); // not working correctly

    printf("%f ", 2309.0); // working correctly -aad .0 

    return 0;
}