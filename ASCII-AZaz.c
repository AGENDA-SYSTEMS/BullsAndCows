#include <stdio.h>

int main(void)
{
    char letter;

    for(letter = 'A';letter<123; letter++){
      if(letter<91 || letter >96)  printf("%c  %d\n", letter, letter);
    }

    return 0;
}