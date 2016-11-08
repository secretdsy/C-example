#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int m = 1;
    int N = 0;
    int k = 0;
    int a, b;
    int count = 0;

    printf("Input array's size : ");
    scanf("%d", &N);
    int arr[N][N];
    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            arr[i][j] = k;
            k++;
        }
    }
    for(count = 0; count < (N / 2); count++) {
        for(j = 0 + count; j < N - 1 - count; j++) {
            i = count;
            arr[i][j] = m;
            m++;
        }
        
        for(i = 0 + count; i < N - 1 - count; i++) {
            arr[i][j] = m;
            m++;
        }
        
        for(j = N - 1 - count; j > 0 + count; j--) {
            arr[i][j] = m;
            m++;
        }
       
        for(i = N - 1 - count; i > 0 + count; i--) {
            arr[i][j] = m;
            m++;
        }
    }
    if(N % 2 == 1) {
        arr[N / 2][N / 2] = N * N;
    }

    for(i = 0; i < N; i++) {
        for(j = 0; j < N; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
