int	ft_is_lower(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int ft_is_upper(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int ft_is_numeric(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_is_capital(char c)
{
	if (!(ft_is_lower(c) || ft_is_upper(c) || ft_is_numeric(c)))
		return (1);
	return (0);
}
char	*ft_strcapitalize(char *str)
{
	int	cnt;
	int	check;
	char	temp;

	if (!*str)
		return (str);
	if (ft_is_lower(*str))
		*str -= 32;
	cnt = 1;
	while (*(str + cnt))
	{
		temp = *(str + cnt);
		if (ft_is_capital(temp))
			check = 1;
		else if (check == 1 && ft_is_lower(temp))
		{
			temp -= 32;
			*(str + cnt) = temp;
			check = 0;
		}
		cnt++;
	}
	return (str);
}

#include <stdio.h>

int main()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", arr);
	ft_strcapitalize(arr);
	printf("%s\n", arr);
}
