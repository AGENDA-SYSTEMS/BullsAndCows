#include<stdio.h>
#include<conio.h>

int main(void)
{
    int i;
    char letter, smallest;
    smallest = 'z';

    printf("Please enter 10 letters to find smalles: ");
    
    for(i=0 ;i<10 ;i++) {
        letter = getche();
        if(letter<smallest) smallest = letter;
    }

    printf("Smallest letter is: %c", smallest);
 
    return 0;
}