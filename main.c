#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	// char **result;
	char dest[] = "";
	// char c = ' ';
	int i = 0;
	char *s = " asd";
	char *res;

	res = ft_strtrim(dest, s);
	printf("%s\n", res);
    // char **result = ft_split(s, ' ');
	// result = ft_split(dest, c);
	// while (result[i])
	// {
	// 	printf("%s\n", result[i]);
	// 	i++;
	// }
	// i = 0;
	// while (result[i])
	// {
	// 	free(result[i]);
	// 	i++;
	// }
	free(res);
	return 0;
}
