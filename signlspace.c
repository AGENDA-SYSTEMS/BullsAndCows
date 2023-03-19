#include <stdio.h>
/*program to substitute multiple spaces with single space*/

    int main()
    {
        int c;
        int c_temp ='\0';
        
        while((c = getchar()) != EOF)
        {
            if(c != ' ' || c_temp != ' ')
            {
                putchar(c);
            }
              c_temp = c;
            }
            return 0;
    }
