#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	char **tmp;
	char dest[] = "123 1234 12345   1234 123 12 1  ";
	char c = ' ';
	int i = 0;

	tmp = ft_split(dest, c);
	while (tmp[i])
	{
		printf("%s\n", tmp[i]);
		i++;
	}
	i = 0;
	while (tmp[i])
	{
		free(tmp[i]);
		i++;
	}
	free(tmp);
	return 0;
}
