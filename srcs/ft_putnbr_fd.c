/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:19:34 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 21:31:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	mod;

	if (fd < 0)
		return ;
	mod = (n % 10) + '0';
	while (n > 0)
	{
		ft_putnbr_fd(n / 10, fd);
		write(fd, &mod, 1);
	}
}
