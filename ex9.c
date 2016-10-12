#include <stdio.h>

int odd(int param[]);
int even(int param[]);
int main() {
    int arr[10];
    int i = 0;
    int *ptr = arr;

    printf("Input 10 integer\n");
    for(i = 0; i < 10; i++) {
        printf("Input : ");
        scanf("%d", &arr[i]);
    }
    odd(arr);
    even(arr);
    return 0;
}

int odd(int param[]) {
    int odd[10] = {0};
    int i = 0;
    int j = 0;

    for(i = 0; i < 10; i++) {
        if(param[i] % 2 == 1) {
            odd[j] = param[i];
            j++;
        }
    }
    printf("odd : ");
    for(i = 0; i < j; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
}

int even(int param[]) {
    int even[10] = {0};
    int i = 0;
    int j = 0;
    
    for(i = 0; i < 10; i++) {
        if(param[i] % 2 == 0) {
            even[j] = param[i];
            j++;
        }
    }
    printf("even : ");
    for(i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
}
