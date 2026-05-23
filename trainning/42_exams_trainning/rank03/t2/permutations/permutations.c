#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i]) i++;
    return i;
}

void swap(char *a, char *b)
{
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(char *str, int len)
{
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = i + 1; j < len; j++)
            if (str[i] > str[j])
                swap(&str[i], &str[j]);
}

void reverse(char *str, int start, int end)
{
    while (start < end)
        swap(&str[start++], &str[end--]);
}

int next_perm(char *str, int len)
{
    int i = len - 2;
    int j;
    
    // Passo 1: encontrar ponto de queda
    while (i >= 0 && str[i] >= str[i + 1])
        i--;
    
    if (i < 0) return 0;  // acabou
    
    // Passo 2: encontrar maior à direita
    j = len - 1;
    while (str[j] <= str[i])
        j--;
    
    // Passo 3: trocar
    swap(&str[i], &str[j]);
    
    // Passo 4: inverter sufixo
    reverse(str, i + 1, len - 1);
    
    return 1;
}

int main(int argc, char **argv)
{
    char *str;
    int len;
    
    if (argc != 2) return 1;
    
    len = ft_strlen(argv[1]);
    if (len == 0) return 0;
    
    str = malloc(len + 1);
    for (int i = 0; i < len; i++)
        str[i] = argv[1][i];
    str[len] = '\0';
    
    sort(str, len);           // ordena primeiro
    puts(str);                // imprime primeiro
    
    while (next_perm(str, len))
        puts(str);            // imprime os próximos
    
    free(str);
    return 0;
}
