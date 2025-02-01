#include <stdio.h>

int gues_number(int num);

int main(void)
{
    int i, num, try_count = 10, magic_number = 777;
        
    for(i = try_count; i>0; i--) {
        printf("Enter your number: \n");
        scanf("%d", &num);
        if(num == magic_number) {
            printf("You guess magic number!\n");
            i = 0;
        }
        else {
            if(num > magic_number) {
                printf("Your number is bigger then magic number! Counts left:%d\n", i-1);
            } 
            else {
            printf("Your number is smaller then magic number! Counts left:%d\n", i-1);
            }
        }
    }
    
    return 0;
}
