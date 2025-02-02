#include <stdio.h>

int main(void)
{
    int time;

    printf("Enter delay time: ");
    scanf("%d", &time);

    for(time; time>-1;time--) {
        printf("%d\n", time);
    }

    printf("TIME OVER!\n");

    return 0;
}