#include <stdio.h>

int ninenine(int, int);
int main() {
    int a = 0;
    int b = 0;

    printf("input 2 integer\n");
    scanf("%d %d", &a, &b);
    printf("from A to B output\n");
    ninenine(a, b);
    return 0;
}

int ninenine(int a, int b) {
    int i = 0;

    if(a > b) {
        int tmp = a;
        int a = b;
        int b = tmp;
    }
    for(; a <= b; a++) {
        for(i = 1; i <= 9; i++) {
            printf("%d * %d = %d\t", a , i, a*i);
        }
        printf("\n");
    }
}
