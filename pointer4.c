#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int i = 0;
    int *ptr1;
    int *ptr2;
    int temp;

    for(i = 0; i < 3; i++) {
        int *ptr1 = &arr[i];
        int *ptr2 = &arr[5 - i];
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    for(i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
