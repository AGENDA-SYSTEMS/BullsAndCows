#include <stdio.h>

/*program to substitute every tabulator with \t*/
/*every symbol back with \b*/
/*every backslash with \\*/

void main()
{
    int c;
    int c_temp = '\0';

    while ((c = getchar()) != EOF)
    {
        if (c == '\t'){
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b'){
            putchar('\\');
            putchar('b');
        }else if (c =='\\'){
            putchar('\\');
            putchar('\\');
        }else{
         putchar(c);
        }
    }
    
}
