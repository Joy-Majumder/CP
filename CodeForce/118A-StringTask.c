#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    return c == 'a' || c == 'o' || c == 'y' ||
           c == 'e' || c == 'u' || c == 'i';
}

int main() {
    char s[105];
    scanf("%s", s);

    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a';   // to lowercase
        }
        if (!is_vowel(c)) {
            printf(".%c", c);
        }
    }
    printf("\n");
    return 0;
}
