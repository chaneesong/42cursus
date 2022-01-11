/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:56:11 by chsong            #+#    #+#             */
/*   Updated: 2022/01/12 04:59:05 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_print_recur(int num)
{
	if (num == 0)
		return (1);
	if (num > 0)
		ft_print_recur(num / 16);
	if (num % 16 < 10)
		ft_putchar_fd((num % 16) + '0', 1);
	else
		ft_putchar_fd((num % 16) - 10 + 'a', 1);
	return (0);
}

int	ft_print_hex_lower(va_list ap)
{
	int		num;
	int		size;

	size = 0;
	num = va_arg(ap, int);
	size = ft_print_recur(num);
	return (size);
}
