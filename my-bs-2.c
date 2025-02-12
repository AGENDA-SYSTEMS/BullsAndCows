#include <stdio.h>
#include <stdlib.h>
//Bubble Sort - fixed size array with 10 elements
int main(void)
{
    int arr[10];
    int i, j, tmp;

    printf("Enter array element and press ENTR \n");

    for(i=0; i<10; i++) scanf("%d", &arr[i]);
    printf("Unsorted array:");
    for(i=0; i<10; i++) printf(" %d, ", arr[i]);
          
    for(i=0; i<9 ; i++) {
        for(j=0; j<9-i;j++) {
            if(arr[j] > arr[j+1]) {
                tmp= arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tmp;
              }
        }
    }
    printf("\nSorted array  :");
    for(i=0; i<10; i++)  printf(" %d, ", arr[i]);
    
    return 0;
}