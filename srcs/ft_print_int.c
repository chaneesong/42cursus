/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:45 by chsong            #+#    #+#             */
/*   Updated: 2022/02/08 18:23:27 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_put_int_to_char(int num, int *size)
{
	if (num == 0)
		return ;
	ft_put_int_to_char(num / 10, size);
	ft_putchar_fd(num % 10 + '0', 1);
	*size += 1;
}

int	ft_print_int(va_list ap)
{
	int		size;
	int		num;

	num = va_arg(ap, int);
	size = 0;
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		size++;
	}
	else if (num == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	else if (num < 0)
	{
		ft_putchar_fd('-', 1);
		num = -num;
		size++;
	}
	ft_put_int_to_char(num, &size);
	return (size);
}
