#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i, j;
    char ch;

    for(int i=0; i<10; i++){
        printf("Enter symbol:\n");
        
        for(ch=getche(); j<=ch; j++) {
            printf(".");
        }

        printf("\n");
        j = 0;
    }

    return 0;
}