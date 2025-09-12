#include <stdio.h>

int main(void)
{
    int sereja = 0, dilma = 0;

    int n;
    scanf("%d", &n);
    int cards[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &cards[i]);

    int right = n - 1, left = 0;
    int player = 1;
    for (int i = 0; i <  n; i++)
    {
        player = !player;
        if (!player)
        {
            if (cards[right] > cards[left])
            {
                sereja +=cards[right];
                right--;
            }
            else
            {
                sereja +=cards[left];
                left++;
            }
        }
        else
        {

            if (cards[right] > cards[left])
            {
                dilma +=cards[right];
                right--;
            }
            else
            {
                dilma +=cards[left];
                left++;
            }
        }
    }
    printf("%d %d\n", sereja, dilma);
}