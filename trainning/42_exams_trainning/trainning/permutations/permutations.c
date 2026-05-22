#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}

int ft_strchr(const char *s, int c)
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

int ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z' ) || (c >= 'a' && c <= 'z'));
}

void ft_swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

void order_string(char *s, int len)
{
	int swapped = 1;

	while (swapped)
	{
		int i  = 0;
		swapped = 0;
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

	if (pos == source_len)
	{
		write(1, result, source_len);
		write(1, "\n", 1);
		return ;
	}

	int i = 0;
	while (i < source_len)
	{
		if(!ft_strchr(result, source[i]))
		{
			result[pos] = source[i];
			generate_permutations(source, result, pos + 1, source_len);
			result[pos] = '\0'; 	
		}
		i++;
	}
}




int main(int ac, char **av)
{
	char *result, *str;
	int i, len;


	if (ac != 2) return 1;

	len = ft_strlen(av[1]);

	if (len == 0) return 1;


	i = 0;
	while (av[1][i])
	{
		if (!ft_isalpha(av[1][i]))
			return 1;
		i++;
	}

	i = 0;

	str = malloc(len + 1);
	result = calloc(len + 1, 1);

	if (!str || !result) return 1;

	while (av[1][i])
	{
		str[i] = av[1][i];
		i++;
	}

	str[i] = '\0';


	generate_permutations(str, result, 0, len);
	free(str);
	free(result);

	return (0);

}
