#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ran();
int main() {
    int i;
    int N;
    int a, b, c;
    int count = 1;
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

    while(1) {
        //printf("rand = %d %d %d\n", arr[0], arr[1], arr[2]);
        int str = 0;
        int ball = 0;

        printf("Input 3 things Number : ");
        scanf("%d %d %d", &a, &b, &c);
        if(a == b || a == c || b == c) {
            printf("Try again input!");
            continue;
        }

        if(arr[0] == a)
            str++;        
        if(arr[1] == b)
            str++;        
        if(arr[2] == c)
            str++;

        if(arr[0] == b || arr[0] == c)
            ball++;
        if(arr[1] == a || arr[1] == c)
            ball++;
        if(arr[2] == a || arr[2] == b)
            ball++;
        
        printf("Result of %d challenge : %dstrike, %dball\n", count, str, ball);

        if(str == 3) {
            printf("\n\nGame Over!\n\n");
            break;
        }

        count++;
    }   

    return 0;
}

int Ran() {
    int result;
    srand((int)time(NULL));
    result = (rand() % 10);
    return result;
}
