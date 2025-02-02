#include <stdio.h>

int main(void) {
    
    int i, j, prime;

    for(i=2; i<1001; i++) {
        prime = 1;
        for(j=2; j<=i/2; j++) {
            if(!(i%j)) prime=0;
        }
        if(prime) printf("Prime number: %d\n", i);    
    }

    return 0;
}