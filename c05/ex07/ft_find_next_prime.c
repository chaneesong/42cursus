int	ft_is_prime(int nb)
{
	int	cur;

	if (nb < 2)
		return (0);
	cur = 2;
	while (cur * cur <= nb)
	{
		if (nb % cur != 0)
			return (0);
		cur++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
