#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char start = 'a';

    char word[101];

    scanf("%s", word);
    int rotations = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        int route = abs(word[i] - start);
        
        int min = (route < 26 - route) ? route : 26 - route; 
        rotations += min;
        start = word[i];
    }

    printf("%d\n", rotations);
}