#include <stdio.h>
#include <conio.h>


int main(void)
{
    char ch;

    while(1) {

        ch = getche();

        switch(ch) {
            case ' ':printf(" SPACE\n");
                break;
            case'\b':printf(" BACK SPACE\n");
                break;
            case'\t':printf(" TAB\n"); 
        }
        if(ch=='\r' ) break;
    }

    return 0;
}