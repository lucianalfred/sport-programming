#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int anton = 0;
    int danik = 0;

    int games;
    char *games_played;



    scanf("%d", &games);
    games_played = (char *) malloc(sizeof(char) * (games + 1));
    if (!games_played) return (1);
    scanf("%s",games_played);
    int i = 0;
    while (games_played[i])
    {
        if (games_played[i] == 'A')
            anton++;
        else
            danik++;
        i++;
    }

    if (anton > danik)
        printf("Anton");
    else if (anton < danik)
        printf("Danik");
    else
        printf("Friendship");

    return (0);
}