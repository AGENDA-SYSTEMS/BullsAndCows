#include <stdio.h>

    #define IN  1 /*inside word*/
    #define OUT 0 /*outside word*/

    /*program to put every word on separate line*/

    void main()
    {
        int c, state;
        state = OUT;
        
        while ((c = getchar()) != EOF ){
            putchar(c);
            if (c == ' ' ||  c=='\t'){    
            putchar('\n');
         }
      }
    }
