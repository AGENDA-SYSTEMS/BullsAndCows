#include <stdio.h>

int main(void)
{
    int i, num;
    
    printf("Enter number to chech dividers: ");
    scanf("%d", &num);

    for(i = num-1; i>1; i=i-1) if(num%i == 0) printf("%d\n", i);

    return 0;
}