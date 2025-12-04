#include <stdio.h>

int main() {
    int k, w;
    long long n, total;
    scanf("%d %lld %d", &k, &n, &w);

    total = (long long)k * w * (w + 1) / 2;

    if (total > n)
        printf("%lld", total - n);
    else
        printf("0");

    return 0;
}
