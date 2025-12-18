#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int n, k;

	scanf("%d", &n);
	scanf("%d", &k);

	int scores[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &scores[i]);

	int k_score = scores[k - 1];
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		if (scores[i] > 0 && scores[i] >= k_score)
            total++;
	}

	printf("%d\n", total);
}