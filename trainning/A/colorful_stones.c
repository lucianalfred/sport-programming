#include <stdio.h>
#include <string.h>

int main(void)
{
    char stone[55];
    char instructions[55];
    
    scanf("%s",stone);
    scanf("%s",instructions);

    int len = strlen(instructions);
    int pos = 0;
    for(int i = 0; i < len; i++)
    {
        if (instructions[i] == stone[pos])
            pos++;
    }
    printf("%d\n",(pos + 1));
    return (0);
}