#include <stdio.h>
#include <stdlib.h>

//program to sort float numbers

int main(void)
{
    float arr[10];
    float tmp;
    int i, j;

    printf("Enter 10 float numbers to be sorted and press ENTR:\n");

    for(i=0; i<10; i++) scanf("%f", &arr[i]);

    printf("Unsorted array:");
    
    for(i=0; i<10; i++) printf(" %.2f ", arr[i]);

    for(i=0;i<9;i++) {
        for(j=0;j<9-i;j++) {
            if(arr[j]>arr[j+1]) {
              tmp = arr[j+1];
              arr[j+1] = arr[j];
              arr[j] = tmp;
            }

        }
    }

    printf("\nSorted array  :");

    for(i=0; i<10; i++) printf(" %.2f ", arr[i]);

    return 0;
}