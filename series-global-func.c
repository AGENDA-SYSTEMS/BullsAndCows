#include <stdio.h>

int global_num = 21;

int series(void);

int main(void)
{

    for(int i=1; i< 11; i++) {
        printf("%d\n", series());
    }

    return 0;
}

int series(void)
{
    global_num = (global_num * 1468) % 467;
    
    return global_num;
}