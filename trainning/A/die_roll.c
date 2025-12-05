#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return (a);
}

int main(void)
{
    int y, w;
    
    scanf("%d %d",&y,&w);

    int max = (y > w) ? y : w;

    int n =  6 - max + 1;
    int d = 6;

    int mdc = gcd(n , d);
    printf("%d/%d\n", n / mdc, d / mdc);

    return (0);
}