#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
	int i, j, len, n;
	char buf[1024];

	len = strlen(argv[1]);

	if (argc != 2)
		return -1;
	while ((n = read(0, buf, 1024)) > 0)
	{
		for(i = 0; i < n; i++)
		{
			if (i + len <= n && memcmp(&buf[i], argv[1], len) == 0)
			{
				for(j = 0; j < len; j++)
					write(1, "*", 1);
				i += len - 1;
			}
			else
			{
				write(1, &buf[i], 1);
			}
		}
	}
	return 0;
}
