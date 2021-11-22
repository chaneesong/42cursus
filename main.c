#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "includes/libft.h"

int main()
{
	// char s1[] = "    1   12   123   12   1    ";
	// char **tmp;
	int i = 0;
	// char *s = "                  olol";
	char **result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	// tmp = ft_split(s1, ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	printf("%s\n", result[i]);
	free(result);
	return (0);
}
