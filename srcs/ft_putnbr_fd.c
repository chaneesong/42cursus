/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:19:34 by chsong            #+#    #+#             */
/*   Updated: 2021/11/20 15:02:31 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', fd);
	}
	if (n / 10 == 0)
	{
		ft_putchar('0' + n, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar('0' + (n % 10), fd);
	}
}
