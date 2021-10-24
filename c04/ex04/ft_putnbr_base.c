/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:00:10 by chsong            #+#    #+#             */
/*   Updated: 2021/10/25 01:32:08 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_invalued_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (*(base + i))
		i++;
	if (i <= 1)
		return (1);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (1);
		j = i + 1;
		while (*(base + j))
		{
			if (*(base + i) == *(base + j))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr(long int nbr, char *base)
{
	long int	cnt;
	cnt = 0;
	while (*(base + cnt))
		cnt++;
	if (nbr < cnt)
	{
		ft_putchar(base[nbr]);
		return ;
	}
	ft_putnbr(nbr / cnt, base);
	ft_putchar(base[nbr % cnt]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int temp;

	temp = (long int)nbr;
	if (ft_is_invalued_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		temp = -temp;
		ft_putnbr(temp, base);
	}
	else
		ft_putnbr(temp, base);
}

int main()
{
	int a = 648;
	char arr[] = "01";
	ft_putnbr_base(a, arr);
}
