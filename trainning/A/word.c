#include <stdio.h>
#include <string.h>


void tolower_case(char *s)
{
	int index = 0;

	if (!s)
		return;
	while (s[index])
	{
		if (s[index] >= 'A' && s[index] <= 'Z')
			s[index] = s[index] + 32;
		index++;
	}
}

void toupper_case(char *s)
{
        int index = 0;

        if (!s)
                return;
        while (s[index])
        {
                if (s[index] >= 'a' && s[index] <= 'z')
                        s[index] = s[index] - 32;
                index++;
        }
}

int main(void)
{
	char word[100];

	int lower = 0;
	int upper = 0;

	int index = 0;

	scanf("%s", word);
	while (word[index])
	{
		if (word[index] >= 'a' && word[index] <= 'z')
			lower++;
		else
			upper++;
		index++;
	}
	if (upper > lower)
		toupper_case(word);
	else if (lower >= upper)
		tolower_case(word);
	printf("%s\n", word);
}
