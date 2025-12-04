#include <stdio.h>

int main() {
    int n, i, count = 0;
    char s[55];
    
    scanf("%d", &n);
    scanf("%s", s);
    
    for (i = 1; i < n; i++) {
        if (s[i] == s[i-1])
            count++;
    }
    
    printf("%d", count);
    return 0;
}
