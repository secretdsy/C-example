#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = &arr[4];
    int total = 0;
    int i = 0;

    for(i = 0; i < 5; i++) {
        total += *(ptr);
        ptr--;
    }

    printf("%d \n", total);

    return 0;
}
