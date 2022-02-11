/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:56:11 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 11:17:51 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_print_recur(unsigned int num, int *pre_size, int *size)
{
	if (num == 0)
		return ;
	ft_print_recur(num / 16, pre_size, size);
	if (num % 16 < 10)
		*pre_size = ft_putchar_fd((num % 16) + '0', *pre_size);
	else
		*pre_size = ft_putchar_fd((num % 16) - 10 + 'a', *pre_size);
	*size = *pre_size;
}

int	ft_print_hex_lower(va_list ap, int pre_size)
{
	unsigned int	num;
	int				size;

	size = pre_size;
	num = va_arg(ap, unsigned int);
	if (num == 0)
		size = ft_putchar_fd('0', pre_size);
	ft_print_recur(num, &pre_size, &size);
	return (size);
}
