#include <stdio.h>
#include <string.h>

void tolower_case(char *s)
{
	int len = strlen(s);
	int i = 0;

	while (i < len)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] + 32;
		i++;
	}
}
int main(void)
{
	char input[101];
	int freq[26] = {0};

	scanf("%s", input);
	tolower_case(input);
	for (int i = 0; input[i] != '\0'; i++)
		freq[input[i] - 'a'] = 1;
	int dist = 0;
	for (int i = 0; i < 26; i++)
		dist += freq[i];
	if (dist % 2 == 0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM\n");
	return (0);
}
