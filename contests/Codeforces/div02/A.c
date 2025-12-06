#include <stdio.h>

int main(void)
{
    int tests;
    char str[105];
    int max = 0;
    int count = 0;

    scanf("%d", &tests);
    while(tests--)
    {
        int size;
        max = 0;
        scanf("%d",&size);
        scanf("%s",str);

        char last = str[size-1];
        for (int i = 0; i < size; i++)
        {
            if (str[i] != last)
                max++;
        } 
        printf("%d\n", max);
    }
    return (0);
}