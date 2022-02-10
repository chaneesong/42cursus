/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:19:42 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 20:56:14 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_addr(unsigned long num, int pre_size, int *size)
{
	if (num == 0)
		return ;
	if (num > 0)
	{
		ft_print_addr(num / 16, pre_size, size);
		if (num % 16 >= 10)
			*size = ft_putchar_fd(num % 16 - 10 + 'a', pre_size);
		else
			*size = ft_putchar_fd(num % 16 + '0', pre_size);
	}
}

int	ft_print_void_ptr(va_list ap, int pre_size)
{
	int				size;
	unsigned long	tmp;

	tmp = va_arg(ap, unsigned long);
	size = ft_putstr_fd("0x", pre_size);
	if (tmp == 0)
		size = ft_putchar_fd('0', 1);
	else
		ft_print_addr(tmp, pre_size, &size);
	return (size);
}
