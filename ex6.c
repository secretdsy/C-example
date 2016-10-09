#include <stdio.h>

int main() {
    int N = 0;
    int h = 0;
    int m = 0;
    int s = 0;

    printf("Input seconds : ");
    scanf("%d", &N);
    h = N / 3600;
    m = (N % 3600) / 60;
    s = N % 60;

    printf("hour : %d, minuet : %d, second : %d\n", h, m, s);
    return 0;
}
