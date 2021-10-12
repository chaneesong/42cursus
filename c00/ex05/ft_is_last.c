char	ft_is_last(char first, char second, char third);

char	ft_is_last(char first, char second, char third)
{
	char	result;

	result = 'N';
	if (first == '7' && second == '8' && third == '9')
		result = 'P';
	return (result);
}
