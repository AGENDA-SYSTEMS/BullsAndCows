#include <stdio.h>

int conv(int dollars);

int main(void)
{
    int dollars;
    int pounds;

    printf("Enter dollar's amount: ");
    scanf("%d", &dollars);
    
    printf("Pounds for %d dollars = %d", dollars, pounds);

    return 0;

}

int conv(int dollars)
{
    return dollars*2;
}
