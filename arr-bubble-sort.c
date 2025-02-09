#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int item[100];
    int a, b, t;
    int count;

    // reading numbers
    printf("How many numbers? ");
    scanf("%d", &count);

    // Validation for count
    if (count <= 0 || count > 100) {
        printf("Invalid number of elements!\n");
        return 1;
    }

    for(a=0; a<count; a++) scanf("%d", &item[a]);

    // Bubble sort
    for(a=0; a<count-1; ++a) {  // begin from zero
        for(b=count-1; b > a; --b) { 
            // comparing near elements
            if(item[b-1] > item[b]) {
                // elements swap
                t = item[b-1];
                item[b-1] = item[b];
                item[b] = t;
            }
        }
    }  

    // printing sorted list
    for(t=0; t<count; t++) printf("%d ", item[t]);
    
    return 0;
}
