#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter proverb number (1 to 5):\n");
    scanf("%d",&num);

    if(num == 1) printf("He who knows how to wait, everything comes in time.");
    if(num == 2) printf("A word spoken - a stone thrown.");
    if(num == 3) printf("A kind word opens iron doors.");
    if(num == 4) printf("The vineyard will not be hoeed, but prayer!");
    if(num == 5) printf("A drop in the ocean becomes a waterfall.");

    return 0;
}