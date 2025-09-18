#include <stdio.h>
#include <string.h>

int main()
{
    int a[4];

    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

    char s[105];
    scanf("%s", s);

    int t = 0;
    for (int i = 0; i < strlen(s); i++){
        int idx = s[i] - '1';
        t += a[idx];
    }

    printf("%d\n", t);
    return (0);
}