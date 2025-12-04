#include <stdio.h>

int main(void) {
    char s[105];
    int c1 = 0, c2 = 0, c3 = 0;

    scanf("%104s", s);

    for (int i = 0; s[i]; i++) {
        if (s[i] == '1') c1++;
        else if (s[i] == '2') c2++;
        else if (s[i] == '3') c3++;
    }

    int first = 1;
    while (c1--) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    while (c2--) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    while (c3--) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }
    printf("\n");
    return 0;
}
