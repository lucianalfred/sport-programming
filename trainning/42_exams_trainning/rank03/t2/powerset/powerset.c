#include <stdio.h>
#include <stdlib.h>

int n, alvo, *nums, *sel;

void buscar(int i, int soma)
{
    if (i == n)
    {
        if (soma == alvo)
        {
            int primeiro = 1;
            for (int j = 0; j < n; j++)
            {
                if (sel[j])
                {
                    if (primeiro)
                        primeiro = 0;
                    else
                        printf(" ");
                    printf("%d", nums[j]);
                }
            }
            printf("\n");
        }
        return;
    }
    
    sel[i] = 0;
    buscar(i + 1, soma);
    sel[i] = 1;
    buscar(i + 1, soma + nums[i]);
}

int main(int argc, char **argv)
{
    
    if (argc < 3)
        return 1;
    
    alvo = atoi(argv[1]);
    n = argc - 2;
    
    nums = malloc(n * sizeof(int));
    sel = malloc(n * sizeof(int));
    
    if (!nums || !sel)
        return 1;
    
    for (int i = 0; i < n; i++)
        nums[i] = atoi(argv[i + 2]);
    
    buscar(0, 0);
    
    free(nums);
    free(sel);
    return 0;
}
