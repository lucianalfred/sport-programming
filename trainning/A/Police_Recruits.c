#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);
    int crims[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &crims);
    }
    
    int res = 0; 
    for (int i = 0; i < n - 1; i++)
    {
        if (crims[i] == 1 && crims[i + 1] == -1)
                crims[i + i] = 0;
    } 

    for (int i = 0; i < n; i++)
    {
        if (crims[i] == -1)
            res++;
    }
    printf("%d\n", res);
}