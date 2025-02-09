#include <stdio.h>

int main(void)
{
    int temp[31], i, min, max, avg;
    int days;

    printf("How many days in the month? ");
    scanf("%d", &days);

    for(i=0; i<days; i++) {
        printf("Enter noonday temperature for day %d: ", i+1);
        scanf("%d", &temp[i]);
    }

    /* calculating average temperature */
    avg = 0;
    for(i=0; i<days; i++) avg = avg+temp[i];
    printf("Average temperature: %d\n", avg/days);

    /* calculating min and max temperature */
    min = 200; 
    max = 0;

    for(i=0; i<days; i++) {
        if(min>temp[i]) min = temp[i];
        if(max<temp[i]) max = temp[i];
    }

    printf("Minimum temperature: %d\n", min);
    printf("Maximum temperature: %d\n", max);

    return 0;
}