#include <stdio.h>

int main() {
    int arr[10];
    int N = 0;
    int i = 0;
    int j = 0;
    int k = 9;
    
    printf("Input integer\n");

    for(i = 0; i < 10; i++) {
        printf("Input : ");
        scanf("%d", &N);
        if(N % 2 == 1) {
            arr[j] = N;
            j++;
        }
        else {
            arr[k] = N;
            k--;
        }
    }

    printf("Output of array : ");

    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}       
