/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_contain.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 20:33:11 by chsong            #+#    #+#             */
/*   Updated: 2022/01/07 22:31:04 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_contain(t_data data, va_list ap)
{
	int		size;
	int		i;

	size = 0;
	size += data.width;
	while (i < size)
	{
		if (data.zpadding == 1)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
	}
	if (data.sign == 1)
		continue ;
}
