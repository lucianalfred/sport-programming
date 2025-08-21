#include <stdio.h>

int main(void)
{
    int problems;
    int f1, f2, f3;
    int total;

    scanf("%d", &problems);
    total = 0;
    while (problems--)
    {
        scanf("%d %d %d", &f1, &f2, &f3);
        if (f1 == 0 && f2 == 1 && f3 == 1)
            total++;
        else if (f1 == 1 && f2 == 0 && f3 == 1)
            total++;
        else if (f1 == 1 && f2 == 1 && f3 == 1)
            total++;
        else if (f1 == 1 && f2 == 1 && f3 == 0)
            total++;
    }
    printf("%d\n", total);

    return (0);
}