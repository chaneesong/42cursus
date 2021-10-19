int	ft_strcmp(char *s1, char *s2)
{
	int	cnt;

	cnt = 0;
	while (*(s1 + cnt))
	{
		if (*(s1 + cnt) != *(s1 + cnt))
			return (0);
		cnt++;
	}
	if (*(s2 + cnt))
		return (0);
	return (1);
}

#include <stdio.h>

int main()
{
	char arr1[] = "hello";
	char arr2[] = "";
	printf("%d\n", ft_strcmp(arr1, arr2));
}
