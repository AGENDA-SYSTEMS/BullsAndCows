#include <stdio.h>
#include <conio.h>


int main(void)
{
    char ch;

     do {

        ch = getche();

        switch(ch) {
            case ' ':printf(" SPACE\n");
                break;
            case'\b':printf(" BACK SPACE\n");
                break;
            case'\t':printf(" TAB\n"); 
        }
        
    } while (ch !='\r');

    return 0;
}