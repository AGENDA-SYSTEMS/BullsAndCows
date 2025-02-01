#include <stdio.h>

int main(void)
{
    int room_count, x, y, total_area, i;

    printf("Enter house room count: ");
    scanf("%d", &room_count);

    for(i=0;i<room_count; i++){
        printf("Enter room %d X: \n", i+1);
        scanf("%d",&x);

        printf("Enter room %d Y: \n", i+1);
        scanf("%d",&y);

        total_area = total_area + (x * y);
     }

     printf("Total area of your house with %d rooms is : %d", room_count, total_area);

     return 0;
}