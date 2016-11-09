#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Ran();
int main() {
    int i = 0;
    int N;
    int c;
    int w = 0;
    int d = 0;
    char *user;
    char *com;

    while(1) {
        c = Ran();
        printf("Rock : 1 Scissor : 2 Paper : 3 , Input number : ");
        scanf("%d", &N);

        if(N == 1)
            user = "Rock";
        else if(N == 2)
            user = "Scissor";
        else
            user = "Paper";

        if(c == 1)
            com = "Rock";
        else if(c == 2)
            com = "Scissor";
        else
            com = "Paper";

        if((N == 1 && c == 2) || (N == 2 && c == 3) || (N == 3 && c == 1)) {
            printf("You choose %s, Computer choose %s, You win! \n", user, com);
            w++;
        }
        else if(N == c) {
            printf("You choose %s, Computer choose %s, You draw! \n", user,
                    com);
            d++;
        }
        else {
            printf("You choose %s, Computer choose %s, You lose! \n", user,
                    com);
            printf("Result of the game : %d win, %d draw \n", w, d);
            break;
        }
    }

    return 0;
}

int Ran() {
    int result;
    srand((int)time(NULL));
    result = (rand() % 3) + 1;
    return result;
}
