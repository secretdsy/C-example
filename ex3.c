#include <stdio.h>

int gcd(int, int);
int main() {
    int a = 0;
    int b = 0;

    printf("input A and B\n");
    scanf("%d %d", &a, &b);
    printf("gcd = %d\n", gcd(a, b));
}

int gcd(int a, int b) {
    int max = 0;
    int i = 0;
    int result = 0;

    if( a > b) {
        int tmp = a;
        int a = b;
        int b = tmp;
    }

    for(i = 1; i <= a; i++) {
        if(a % i == 0 && b % i == 0) {
            result = i;
        }
    }
    return result;
}
