#include <stdio.h>

/* counting symbols from input version 2*/
    void main()
    {
        double nc;

        for (nc = 0; getchar() != EOF; nc++)
             ;
        printf("%.0f\n", nc);
    }
