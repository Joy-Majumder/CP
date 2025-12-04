#include <stdio.h>

int main() {
    char s[105];
    int seen[26] = {0};
    int count = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int idx = s[i] - 'a';
        if (!seen[idx]) {
            seen[idx] = 1;
            count++;
        }
    }

    if (count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}