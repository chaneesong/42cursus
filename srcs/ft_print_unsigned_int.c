/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:51:31 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 20:55:59 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_put_int_to_char(unsigned int num, int pre_size, int *size)
{
	if (num == 0)
		return ;
	ft_put_int_to_char(num / 10, pre_size, size);
	*size = ft_putchar_fd(num % 10 + '0', pre_size);
}

int	ft_print_unsigned_int(va_list ap, int pre_size)
{
	unsigned int	num;
	int				size;

	num = va_arg(ap, unsigned int);
	size = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', pre_size);
		size++;
	}
	else
		ft_put_int_to_char(num, pre_size, &size);
	return (size);
}
