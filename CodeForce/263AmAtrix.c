#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int r = 0, c = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &x);
            if (x == 1) {
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r - 3) + abs(c - 3);
    printf("%d\n", moves);

    return 0;
}
