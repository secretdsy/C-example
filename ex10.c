#include <stdio.h>

int trans(int);
int main() {
    int N;

    printf("Input Decimal : ");
    scanf("%d", &N);
    printf("Output Binary : ");
    trans(N);
    printf("\n");

    return 0;
}

int trans(int num) {
    int a = 1;
    int i = 0;
    int j = 0;
    int arr[20] = {0};
    
    while(a <= num) {
        a *= 2;
        j++;
    }
    while(num != 0) {
        a /= 2;
        if(num < a)
            arr[i] = 0;
        else {
            num -= a;
            arr[i] = 1;
        }
        i++;
    }
    for(i = 0; i < j; i++) {
        printf("%d", arr[i]);
    }
}
