#include <stdio.h>

int main(void)
{
    int num;

    /* този цикъл няма да се изпълни */
    for(num=11; num<11; num=num+1) printf("%d", num);
    
    printf("terminating");

    return 0;
}