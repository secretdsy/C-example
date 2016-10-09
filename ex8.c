#include <stdio.h>

int abc(int);
int main() {
    int N = 0;
    printf("Input integer : ");
    scanf("%d", &N);
    printf("2 ^ %d = %d\n", N, abc(N));
    return 0;
}

int abc(int N) {
    if (N == 0)
        return 1;
    return 2 * abc(N - 1);
}
