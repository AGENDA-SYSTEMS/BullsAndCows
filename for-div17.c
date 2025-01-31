#include <stdio.h>

int main(void)
{
    int i;

    for(i = 17; i<101; i=i+1) if(i%17 == 0) printf("%d\n",i);
    
    return 0;
}