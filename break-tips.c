#include <stdio.h>
#include <conio.h>

int main(void)
{
    float i;
    char ch;

    printf("Tip calculator\n");

    for(i=1.0; i<101.0; i=i+1.0) {
        printf("%f %f %f %f\n", i, i+i*.1, i+i*.15, i+i*.2);
        printf("More (Y/N)? ");
        ch=getche();
        printf("\n");
        if(ch=='N') break;
    }

    return 0;
}