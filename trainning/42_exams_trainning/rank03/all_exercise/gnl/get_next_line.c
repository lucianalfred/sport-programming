#include "get_next_line.h"

char *ft_strchr(char *s, int c)
{
	 int i = 0;

	 if (!s)
		 return NULL;
	 while (s[i] != '\0')
	 {
		 if (s[i] == (char)c)
			 return s + i;
		 i++;
	 }

	 if (c == '\0')
		 return s + i;
	 return NULL;
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;

	if (!dest && !src)
		return NULL;
	if (!src)
		return dest;

	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}

	return dest;
}

size_t ft_strlen(char *s)
{
	size_t len  = 0;

	if (!s)
		return 0;
	while (s[len])
	{
		len++;
	}

	return len;
}

int str_append_mem(char **s1, char *s2, size_t size2)
{
	size_t size1;

	if (*s1)
		size1 = ft_strlen(*s1);
	else
		size1 = 0;
	char *tmp = malloc(size2 + size1 + 1);
	if (!tmp)
	{
		return 0;
	}

	if (*s1)
		ft_memcpy(tmp, *s1, size1);
	ft_memcpy(tmp + size1, s2, size2);
	tmp[size1 + size2] = '\0';

	free(*s1);
	*s1 = tmp;
	return 1;
}

int str_append_str(char **s1, char *s2)
{
	return str_append_mem(s1, s2, ft_strlen(s2));
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;

	if (!dest && !src)
		return NULL;
	if (!src)
		return dest;
	if (dest == src)
		return dest;
	else if (dest > src)
	{
		i = n;

		while (i > 0)
		{
			i--;
			((char *)dest)[i] = ((char *)src)[i];
		}

		return dest;
	}
	else
	{
		i = 0;
		while ( i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
		return dest;
	}

	return NULL;

}


char *get_next_line(int fd)
{
	static char buff[BUFFER_SIZE + 1];
       	char *line = NULL;
	char *new_line;
	ssize_t bytes;

	while(1)
	{
		new_line = ft_strchr(buff, '\n');
		if (new_line)
		{
			if (!str_append_mem(&line, buff, new_line -  buff + 1))
			{
				free(line);
				return NULL;
			}

			ft_memmove(buff, new_line + 1, ft_strlen(new_line + 1) + 1);
			return line;
		}

		if (!str_append_str(&line, buff))
		{
			free(line);
			return NULL;
		}

		bytes = read(fd, buff, BUFFER_SIZE);

		if (bytes == - 1)
		{
			free(line);
			buff[0] = '\0';
			return NULL;
		}

		if (bytes == 0)
		{
			if (line && *line)
			{
				buff[0] = '\0';
				return line;
			}

			buff[0] = '\0';
			free(line);
			return NULL;
		}

		buff[bytes] = '\0';
	}	
}
