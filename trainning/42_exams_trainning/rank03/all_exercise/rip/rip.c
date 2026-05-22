#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int is_valid(char *str)
{
	int i = 0;
	int bal = 0;

	while(str[i] != '\0')
	{
		if (str[i] == '(') bal++;
		if (str[i] == ')') bal--;
		i++;
	}

	return (bal == 0);
}

int count_to_remove(char *str)
{
	int open = 0;
	int remove = 0;
	int i = 0;

	if (!str)
		return 0;
	while (str[i])
	{
		if (str[i] == '(')
		       	open++;
		else if (str[i] == ')')
		{
			if (open) open--;
			else remove++;
		}
		i++;
	}

	return (remove + open);
}

void solve(char *str, int p, int count_remove)
{
	
	if (count_remove == 0 || !str[p])
	{
		if (is_valid(str))
			puts(str);
		return ;
	}


	while (str[p] && str[p] != '(' && str[p] != ')')
		p++;

	if (!str[p]) return ;

	char c = str[p];
	str[p] = ' ';
	solve(str, p + 1, count_remove - 1);
	str[p] = c;
	solve(str, p + 1, count_remove);

}


int main(int argc, char **argv)
{

	if (argc != 2 || argv[1][0] == '\0')
		return 0;
	
	char str[10000];
	int i = 0;

	while (argv[1][i])
	{
		str[i] = argv[1][i];
		i++;
	}

	int count_remove = count_to_remove(str);

	if (count_remove == 0)
	{
		puts(str);
		return 0;
	}

	solve(str, 0, count_remove);
	return (0);
}
