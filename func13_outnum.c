#include <stdio.h>

void outnum(int num);

int main(void)
{
    int num;
    
    printf("Enter number to be printed on screen: ");
    scanf("%d", &num);
    outnum( num );

    return 0;
}

void outnum(int num)
{
    printf("%d ",num);
}