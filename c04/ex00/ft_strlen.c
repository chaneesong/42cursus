int	ft_strlen(char *str)
{
	int	cnt;

	if (!*str)
		return (0);
	cnt = 0;
	while (*(str + cnt))
		cnt++;
	return (cnt);
}

#include <stdio.h>

int main()
{
	char arr[] = "\0";

	printf("%d\n", ft_strlen(arr));
}
