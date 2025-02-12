#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j, arrsize, tmp;
        
    printf("Enter array size: \n");
    scanf("%d", &arrsize);
    printf("Array size = %d\n", arrsize);
    int numarr[arrsize];

    
    printf("Enter number and press ENTR\n");
    for(i=0; i<arrsize; i++) {
        printf("\n");
        scanf("%d", &numarr[i]);
        printf("Array element %d = %d ", i, numarr[i]);
    }

    for(i=0; i<arrsize-1; i++){
        for(j=0; j<arrsize-1; j++){
            if(numarr[j]>numarr[j+1]){
                tmp = numarr[j+1];
                numarr[j+1] =  numarr[j];
                numarr[j] = tmp;
            }
        }
    }   

    printf("\n");

    for(i=0; i<arrsize; i++) {
        printf("-%d  ", numarr[i]);
    }

return 0;
}