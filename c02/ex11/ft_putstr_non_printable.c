#include <unistd.h>

int	ft_is_non_print(char c)
{
	if ((1 <= c && c <= 31) || c == 127)
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex_print(char c)
{
	int	num;
	char	temp[16] = "0123456789abcdef";
	
	num = c;
	ft_putchar('\\');
	ft_putchar(temp[c / 16]);
	ft_putchar(temp[c % 16]);

}

void	ft_putstr_non_printable(char *str)
{
	int	cnt;

	if (!*str)
		return ;
	cnt = 0;
	while (*(str + cnt))
	{
		if (ft_is_non_print(*(str + cnt)))
			ft_hex_print(*(str + cnt));
		else
			ft_putchar(*(str + cnt));
		cnt++;
	}
}

int main()
{
	char arr[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(arr);
}

