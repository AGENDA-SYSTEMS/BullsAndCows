#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num==0) {
        printf("Number %d is ZERO!\n", num);
        }
        else if(num<0) {
            printf("Number %d is NEGATIVE!\n", num);
            }
            else {
                printf("Number %d is POSITIVE!\n", num);
            }

    return 0;        
    }       

