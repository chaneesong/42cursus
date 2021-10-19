int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cnt;

	cnt = 0;
	while (*(s1 + cnt) && cnt <= n)
	{
		if (*(s1 + cnt) != *(s2 + cnt))
			return (0);
		cnt++;
	}
	return (1);
}
