#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	// char *tmp;
	char dest[] = "toto";
	char src[] = "";
	char dest1[] = "toto";
	char src1[] = "";
	// char set = ' ';
	// int	i = 654321;
	// tmp = ft_itoa(i);
	// printf("%s\n", tmp);
	// free(tmp);
	// tmp = ft_split(src, set);
	printf("%lu\n", strlcat(dest, src, 0));
	printf("%zu\n", ft_strlcat(dest1, src1, 0));
	printf("%s\n", dest);
	printf("%s\n", dest1);
	// while (tmp[i])
	// {
	// 	printf("%s\n", tmp[i]);
	// 	i++;
	// }
	// i = 0;
	// while (tmp[i])
	// {
	// 	free(tmp[i]);
	// 	i++;
	// }
	// free(tmp);
	return 0;
}