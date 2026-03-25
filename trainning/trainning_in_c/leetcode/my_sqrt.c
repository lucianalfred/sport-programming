#include <stdio.h>

int mySqrt(int x) {
	if (x == 0) return 0;

	int sqrt = 1;

	for(int i = 1; i <= x / i; i++)
	{
		if (i * i <= x)
			sqrt = i;
	}	
	return sqrt;
}

int main()
{

    printf("%d\n\n", mySqrt(8));
    printf("%d\n\n", mySqrt(9));
    printf("%d\n\n", mySqrt(4));
    printf("%d\n\n", mySqrt(16));

    return 0;
}
