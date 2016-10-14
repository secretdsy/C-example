#include <stdio.h>

void DesSort(int ary[], int len);
int main() {
    int arr[7];
    int i;
    int len;
    
    for(i = 0; i < 7; i++) {
        printf("Input : ");
        scanf("%d", &arr[i]);
    }
    
    DesSort(arr, sizeof(arr) / sizeof(int));

    printf("DesSort : ");
    for(i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void DesSort(int ary[], int len) {
    int i, j;
    int temp;

    for(i = 0; i < (len - 1); i++) {
        for(j = 0; j < (len - i - 1); j++) {
            if(ary[j] < ary[j + 1]) {
                temp = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = temp;
            }
        }
    }
}
