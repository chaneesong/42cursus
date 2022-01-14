/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lshift.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:00:33 by chsong            #+#    #+#             */
/*   Updated: 2022/01/10 08:08:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_shift(int width, int len, int zpadding)
{
	int	size;
	int	res;

	size = width - len;
	res = 0;
	if (size > 0)
		res = size;
	while (size > 0)
	{
		if (zpadding == 0)
			ft_putchar_fd(1, ' ');
		else
			ft_putchar_fd(1, '0');
		size--;
	}
	return (res);
}
