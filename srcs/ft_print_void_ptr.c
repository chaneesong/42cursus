/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_void_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:19:42 by chsong            #+#    #+#             */
/*   Updated: 2022/01/18 00:28:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_addr(unsigned long num, int *size)
{
	if (num == 0 && *size == 0)
	{
		ft_putstr_fd("(nil)\0", 1);
		*size += 5;
		return ;
	}
	if (num > 0)
	{
		ft_print_addr(num / 16, size);
		if (num % 16 >= 10)
			ft_putchar_fd((char)(num % 16 - 10 + 'a'), 1);
		else
			ft_putchar_fd((char)(num % 16 + '0'), 1);
		*size += 1;
	}
	return ;
}

int	ft_print_void_ptr(va_list ap)
{
	int				size;
	unsigned long	tmp;
	
	tmp = va_arg(ap, unsigned long);
	size = 0;
	if (tmp)
	{
		size += 2;
		ft_putstr_fd("0x", 1);
	}
	ft_print_addr(tmp, &size);
	return (size);
}
