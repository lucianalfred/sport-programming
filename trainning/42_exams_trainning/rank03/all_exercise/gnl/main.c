#include "get_next_line.h"
#include <stdio.h>


int main(void)
{

	char *line = NULL;
	int i = 1;

	int fd = open("arquivo.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Erro ao abrir arquivo"); 
		return 1;
	}

	while ((line = get_next_line(fd)) != NULL)
	{
		printf("line[%d] = %s",i ,line);
		free(line);
		i++;	
	}

	close(fd);
	return 0;
}
