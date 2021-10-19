#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cnt;

	if (!*str)
		return ;
	cnt = 0;
	while (*(str + cnt))
	{
		write(1, str + cnt, 1);
		cnt++;
	}
}

#include <stdio.h>

int main()
{
	char arr1[] = "hello";

	ft_putstr(arr1);
}
