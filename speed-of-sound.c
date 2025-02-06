#include <stdio.h>

int noparam_speedofsound(void);
int param_speedofsound(int time);

int main(void) {
    
    int time = 10;
    int distance = noparam_speedofsound();

    printf("No param distance with speed of sound: %d\n", distance);
    printf("Func with param returning distance with speed of sound - param is time 10 sec: %d\n", param_speedofsound(10));

    return 0;
}

int param_speedofsound(int time) {
    int speedofsound = 340;
    return speedofsound * time;
}

int noparam_speedofsound(void) {
    int speedofsound = 340;
    int time = 10;
    return time * speedofsound;
}