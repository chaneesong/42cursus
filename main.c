#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	char **tmp;
	char dest[] = "1234   12345    123";
	char set = ' ';
	int i = 0;
	free(tmp);
	tmp = ft_split(dest, set);
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