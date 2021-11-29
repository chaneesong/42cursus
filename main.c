#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*buf;
	int a;

	memset(buf, 0, BUFFER_SIZE);

	fd = open("test.txt", O_RDONLY, 444);
	for(int i = 0; i < 4; i++)
	{
		buf = get_next_line(fd);
		printf("%s\n", buf);
	}

	close(fd);
	return (0);
}