#include <stdio.h>

void rotary(int ary[4][4]);
int main() {
    int i, j;
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8},
        {9, 10, 11, 12}, {13, 14, 15, 16}};
    int temp[i];
    int *ptr = arr;

    for(i = 0; i < 16; i++) {
        int k = 1;
        temp[i] = k;
        k++;
    }

    rotary(arr);

    return 0;
}

void rotary(int ary[4][4]) {
    int i, j, k;
    int tem;
    int temp[15] = {0};

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            int k = 0;
            temp[k] = ary[i][j];
            k++;
        }
    }

    for(k = 0; k < 3; k++) {
        for(i = 0; i < 3; i++) {
            ary[i][3] = temp[i];
        }
        for(j = 3; j > 0; j--) {
            ary[3][j] = temp[3 + 4 * j];
        }
        for(i = 3; i > 0; i--) {
            j = 15;
            ary[i][0] = temp[j];
            j--;
        }
        for(j = 2; j >= 0; j--) {
            i = 1;
            ary[0][j] = temp[4 * i];
            i++;
        }
        tem = ary[1][1];
        ary[1][1] = ary[2][1];
        ary[2][1] = ary[2][2];
        ary[2][2] = ary[1][2];
        ary[1][2] = tem;

        for(i = 0; i < 4; i++) {
            for(j = 0; j < 4; j++) {
                int k = 0;
                temp[k] = ary [i][j];
                k++;
            }
        }
        for(i = 0; i < 4; i++) {
            printf("%d %d %d %d \n", ary[i][0], ary[i][1], ary[i][2], ary[i][3]);
        }
    }
}
