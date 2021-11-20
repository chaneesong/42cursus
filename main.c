#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	// char **result;
	// char dest[] = "123 1234 12345   1234 123 12 1  ";
	// char c = ' ';
	int i = 0;
	char *s = " ";

    char **result = ft_split(s, ' ');
	// result = ft_split(dest, c);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}
