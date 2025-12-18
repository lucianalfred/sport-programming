#include <stdio.h>

typedef struct s_team_uniform{
    int home;
    int guest;
}t_team_uniform;


int main(void)
{
    int n;
    scanf("%d", &n);

    t_team_uniform teams[n];

    for (int i = 0; i < n; i++)
        scanf("%d %d", &teams[i].home, &teams[i].guest);

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (teams[i].guest == teams[j].home)
                    total++;
            }
        }
    }

    printf("%d\n", total);

    return (0);
}
