unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cnt;
	int i;

	cnt = 0;
	i = 0;
	while (*(src + i))
		i++;
	if (size == 0)
		return (i);
	while (cnt < size - 1)
	{
		*dest++ = *src++;
		cnt++;
	}
	*dest = '\0';
	return (i);
}

#include <stdio.h>

int main()
{
	char *src = "123456dsahjskadbghjdskasdagnjas";
	char dest[20];
	size_t ret = ft_strlcpy(dest, src, 21);
	printf("dest = %s\nreturn = %zu\n", dest, ret);
}
