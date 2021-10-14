/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:02:41 by chsong            #+#    #+#             */
/*   Updated: 2021/10/14 15:59:56 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb / 10 == 0)
	{
		ft_putchar('0' + nb);
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
