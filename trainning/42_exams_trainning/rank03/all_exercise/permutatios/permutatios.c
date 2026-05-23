#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return i;
}

int ft_isalpha(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

void ft_swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int ft_strchr(const char *s, char c)
{
    int i = 0;
    while (s[i])
    {
        if (s[i] == c)
            return 1;
        i++;
    }
    return 0;
}

// Ordena uma CÓPIA da string
void order_string(char *s, int len)
{
    int swapped = 1;
    
    while (swapped)
    {
        swapped = 0;
        int i = 0;
        while (i < len - 1)
        {
            if (s[i] > s[i + 1])
            {
                ft_swap(&s[i], &s[i + 1]);
                swapped = 1;
            }
            i++;
        }
    }
}

void generate_permutations(char *source, char *result, int pos, int source_len)
{
    int i;
    
    if (pos == source_len)
    {
        write(1, result, source_len);
        write(1, "\n", 1);
        return;
    }
    
    i = 0;
    while (i < source_len)
    {
        if (!ft_strchr(result, source[i]))
        {
            result[pos] = source[i];
            generate_permutations(source, result, pos + 1, source_len);
            result[pos] = '\0';
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    char *str;
    char *result;
    int len;
    int i;

    if (argc != 2)
        return 1;
    
    len = ft_strlen(argv[1]);
    if (len == 0)
        return 1;
    
    // Verifica se contém apenas letras
    i = 0;
    while (argv[1][i])
    {
        if (!ft_isalpha(argv[1][i]))
            return 1;
        i++;
    }
    
    // Copia a string para poder modificá-la
    str = malloc(len + 1);
    if (!str)
        return 1;
    
    i = 0;
    while (argv[1][i])
    {
        str[i] = argv[1][i];
        i++;
    }
    str[i] = '\0';
    
    // Ordena a cópia
    order_string(str, len);
    
    // Prepara resultado
    result = calloc(len + 1, 1);
    if (!result)
    {
        free(str);
        return 1;
    }
    
    // Gera permutações
    generate_permutations(str, result, 0, len);
    
    free(str);
    free(result);
    return 0;
}
