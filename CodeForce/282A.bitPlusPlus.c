#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int x = 0;
    char s[5];

    while (n--) {
        scanf("%s", s);
        if (strstr(s, "++") != NULL) {
            x++;
        } else {
            x--;
        }
    }

    printf("%d\n", x);
    return 0;
}
