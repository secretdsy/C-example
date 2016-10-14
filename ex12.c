#include <stdio.h>
#include <string.h>

int palin(char arr[]);
int strlen(char arr[]);
int main() {
    char str[] = "";
    printf("Input String : ");
    scanf("%s", &str[]);
    palin(str);

    return 0;
}

int palin(char arr[]) {
    int i, j;
    int a = 0;
    int b = 0;

    i = strlen(arr);
    j = i - 1;
    b = j;

    while(1) {
        if(a > (i / 2)) {
            printf("This is Palindrome\n");
            break;
        }
        if(arr[a] !=  arr[b]) {
            printf("This is not Palindrome\n");
            break;
        }
        a++;
        b--;
    }
}
