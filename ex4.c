#include <stdio.h>

int main() {
    int N = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    int k = 0;

    printf("Your money : ");
    scanf("%d", &N);
    int a = N;

    m = N / 700;
    for(i = 1; i <= m; i++) {
        int N = a;
        N = N - (i * 700);
        m = N / 500;
        //printf("%d\n", N);
        for(j = 1; j <= m; j++) {
            N = N - (j * 500);
            m = N / 400;
            //printf("%d\n", N);
            for(k = 1; k <= m; k++) {
                N = N - (k * 400);
                printf("%d\n", N);
                if(N == 0) {
                    printf("%d, %d, %d", i, j, k);
                }
            }
        }
    }
    printf("What do you want?\n");
    return 0;
}
