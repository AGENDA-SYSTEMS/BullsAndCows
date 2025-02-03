#include <stdio.h>
#include <conio.h>

int main(void)
{
    char ch;
    int letters =0, numbers=0, symbols=0;

    do {
    ch=getche();
   // printf("%c", ch);
    switch (ch){
        case'.':
        case',':
        case'?':
        case'!':
        case'-':
        case'"':
            ++symbols;
    break;
        case'0':
        case'1':
        case'2':
        case'3':
        case'4':
        case'5':
        case'6':
        case'7':
        case'8':
        case'9':
            ++numbers;
    break;
        default:
            ++letters;
        break;
   }

    }while (ch!='\r');

    printf("\nLetters count: %d, numbers count: %d, punctuation symbols count: %d",
    letters, numbers, symbols );

    return 0;
}