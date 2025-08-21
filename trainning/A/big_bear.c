#include <stdio.h>

int main(void)
{
    int year = 0;
    int a, b;
    
    scanf("%d %d", &a, &b);
    do
    {
        a = a * 3;
        b = b * 2;
        year++; 
    }while(a <= b);

    printf("%d", year);
}