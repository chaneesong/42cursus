/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 20:15:34 by chsong            #+#    #+#             */
/*   Updated: 2021/10/25 20:37:10 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	int	cnt;

	cnt = 0;
	while (*(str + cnt) != '\0')
	{
		write(1, (str + cnt), 1);
		cnt++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb / 10 == 0)
	{
		ft_putchar('0' + nb);
	}
	else
    {
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	cnt;

	cnt = 0;
	while (*(par + cnt).str)
	{
		ft_putstr(*(par + cnt).str);
		ft_putnbr(*(par + cnt).size);
		write(1, "\n", 1);
		ft_putstr(*(par + cnt).copy);
		cnt++;
	}
}
