#include <stdio.h>

int main(void)
{
    int trip_count;
    int s, v;

    printf("Enter trip count: ");
    scanf("%d", &trip_count);

    while(trip_count>0) {
        printf("Enter distance: ");
        scanf("%d", &s);
        printf("Enter speed: ");
        scanf("%d", &v);
        printf("Time is: %d\n", s/v);

        trip_count--;
    }

    return 0;
}