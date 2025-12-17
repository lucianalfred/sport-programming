#include <stdio.h>
#include <string.h>

void clean_aux(char *s)
{
	int i;

	for (i = 0; i < 100; i++)
		s[i] = '0';
}

int count_size(char *s)
{
	int i = 0;
	while (s[i] != '0' && s[i])
		i++;
	return (i);
}
int aux_size(char *s, char *aux)
{
	int size = 0;
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		int foud = 0;
		for (int j = 0; j < len; j++)
		{
			if (s[i] == aux[i])
				found = 1;
		}
		if (!found)
			size++;
		found = 0;
	}
	return (size);	
}
int main(void)
{
	char input[101];
	char aux[101];

	clean_aux(aux);

	scanf("%s", input);
	int total = 0;
	int len = strlen(input);
	
	for (int i = 0; i < len; i++)
	{
		int found = 0;
		for(int j = 0; j < len; j++)
		{
			if (input[i] == aux[j])
				found = 1;
		}
		if (!found)
		{
			aux[total] = input[i];
			total++;
		}
		found = 0;
	}

	int size = count_size(aux);
	if (size % 2  == 0)
	       printf("CHAT WITH HER!");
	else
	      printf("IGNORE HIM!");
	printf("\n");	
	return (0);
}
