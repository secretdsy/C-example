#include <stdio.h>

int main() {
    int N = 0;
    int i = 1;
    int k = -1;

    printf("Input integer : ");
    scanf("%d", &N);

    while(i <= N) {
        i *= 2;
        k++;
    }
    printf("Max K : %d\n", k);
    return 0;
}
