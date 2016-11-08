#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    printf("random range : between 0 to %d \n", RAND_MAX % (RAND_MAX - 99));
    for(i = 0; i < 5; i++) {
        printf("random : %d \n", rand() % 100);
    }
    return 0;
}
