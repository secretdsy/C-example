#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ran();
int main() {
    int i;
    int arr[3];
    arr[0] = Ran();

    while(1) {
        arr[1] = Ran();

        if(arr[0] != arr[1])
            break;
    }

    while(1) {
        arr[2] = Ran();
        if(arr[0] != arr[2] && arr[1] != arr[2])
            break;
    }
    for(i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

int Ran() {
    int result;
    srand((int)time(NULL));
    result = (rand() % 10);
    return result;
}
