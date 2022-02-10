/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:51:31 by chsong            #+#    #+#             */
/*   Updated: 2022/01/18 03:07:59 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_put_int_to_char(unsigned int num, int *size)
{
	if (num == 0)
		return ;
	ft_put_int_to_char(num / 10, size);
	ft_putchar_fd(num % 10 + '0', 1);
	*size += 1;
}

int	ft_print_unsigned_int(va_list ap)
{
	unsigned int	num;
	int				size;

	num = va_arg(ap, unsigned int);
	size = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		size++;
	}
	else
		ft_put_int_to_char(num, &size);
	return (size);
}
