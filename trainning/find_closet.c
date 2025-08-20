#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int find_temperature(int temperatures[], int n)
{
    int i = 0;
    
    // find min
    int closet = temperatures[0];
    while (i < n)
    {
	int temp = temperatures[i];
        if (abs(temp) < abs(closet) || (abs(temp) == abs(closet)  && temp > closet))
			closet = temp;
           
        i++;
    }

    return closet;
}
int main()
{
    // the number of temperatures to analyse
    int n;
   
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        // a temperature expressed as an integer ranging from -273 to 5526
        int t;
        scanf("%d", &t);
        array[i] = t;
    }

    // Write an answer using printf(). DON'T FORGET THE TRAILING \n
    // To debug: fprintf(stderr, "Debug messages...\n")
    int find = find_temperature(array, n);
    printf("%d\n", find);

    return 0;
}
