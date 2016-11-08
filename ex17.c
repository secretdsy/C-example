#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    srand((int)time(NULL));
    printf("Dice 1's result : %d \n", (rand() % 6) + 1);
    printf("Dice 2's result : %d \n", (rand() % 6) + 1);
    return 0;
}
