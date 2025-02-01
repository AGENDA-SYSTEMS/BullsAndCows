#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter start number: ");
    scanf("%d", &num);

    for(num; num>0; num--) printf("%d\n", num);
    
    printf("\a");
    
    return 0;
}