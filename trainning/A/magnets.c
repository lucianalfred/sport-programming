#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int tests;
	char magnetic[3];

	scanf("%d", &tests);

	char **all = (char **)malloc(sizeof(char *)*tests);
	if (!all)
	{
		printf("memory error\n");
		free(all);
		all = NULL;
		exit(1);
	}

	for(int i = 0; i < tests; i++)
	{
		all[i] = (char *)malloc(sizeof(char)* 3);
		if (!all)
		{
			for(int j = 0; j < i; j++)
				free(all[j]);
			free(all);
			all = NULL;
			exit(1);
		}
	}

	int groups = 1;

	for (int i = 0; i < tests; i++)
		scanf("%2s",all[i]);

	for(int i = 1; i < tests; i++)
	{
		if (all[i][0] != all[i-1][0])
			groups++;
	}

	printf("%d\n", groups);
	for (int i = 0; i < tests; i++)
		free(all[i]);
	free(all);
	all = NULL;
	return (0);

}
