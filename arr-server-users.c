#include <stdio.h>

int main(void)
{
    int ServersUsers[5][2] = {
        1, 14,
        2, 28,
        3, 19,
        4, 8,
        5, 15
    };

    int server;
    int i;

    printf("Enter the server number: ");
    scanf("%d", &server);

    /* table search */
    for(i=0; i<5; i++)
        if(server == ServersUsers[i] [0]) {
            printf("There are %d users on server %d.\n", ServersUsers[i][1], server);
            break;
        }
    /* report for errors, if server was not found */ 
    if(i==5) printf("Sever not listed.\n");

    return 0;
}