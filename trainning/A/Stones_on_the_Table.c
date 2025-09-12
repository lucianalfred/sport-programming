#include <stdio.h>

int main(void)
{
    char stones[51];

    int n;
    scanf("%d", &n);

    scanf("%s", stones);
    int min = 0;
    for (int i = 1; i < n; i++)
    {
        if (stones[i] == stones[i - 1])
            min++;

    }

    printf("%d\n", min);

}