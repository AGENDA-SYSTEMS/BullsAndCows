// check for repeating numbers in array

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[10];
    int i, j;

    printf("Enter 10 numbers:");
    printf("\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            for (j = i; j > 0; j--)
            {
                if (arr[i] == arr[j - 1])
                    printf("SAME NUMBER: %d\n", arr[i]);
            }
        }
    }
    return 0;
}