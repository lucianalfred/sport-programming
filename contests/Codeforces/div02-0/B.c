#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);

        long long maxTabsWithLenB = a / b;

        int mov = (b * n >= a) ? 1 : 2;
        printf("%d\n",mov); 
    }

    return (0);
}
