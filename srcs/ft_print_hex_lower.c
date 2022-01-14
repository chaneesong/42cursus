/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:56:11 by chsong            #+#    #+#             */
/*   Updated: 2022/01/14 09:23:39 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_recur(int num, int *size)
{
	if (num == 0)
		return ;
	ft_print_recur(num / 16, size);
	if (num % 16 < 10)
		ft_putchar_fd((num % 16) + '0', 1);
	else
		ft_putchar_fd((num % 16) - 10 + 'a', 1);
	*size += 1;
}

int	ft_print_hex_lower(va_list ap)
{
	int		num;
	int		size;

	size = 0;
	num = va_arg(ap, int);
	ft_print_recur(num, &size);
	return (size);
}
