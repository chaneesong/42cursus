/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:19:42 by chsong            #+#    #+#             */
/*   Updated: 2022/01/13 17:51:22 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_print_addr(unsigned long num)
{
	if (num == 0)
		return (1);
	if (num > 0)
	{
		ft_print_addr(num / 16);
		if (num % 16 >= 10)
			ft_putchar_fd((char)(num % 16 - 10 + 'a'), 1);
		else
			ft_putchar_fd((char)(num % 16 + '0'), 1);
	}
	return (1);
}

int	ft_print_void_ptr(va_list ap)
{
	int				size;
	unsigned long	tmp;
	
	tmp = va_arg(ap, unsigned long);
	size = 0;
	ft_putstr_fd("0x", 1);
	size = ft_print_addr(tmp);
	return (size);
}
