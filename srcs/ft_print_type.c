/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:22:51 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 21:18:31 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_type(char c, va_list ap, int pre_size)
{
	int		size;

	if (c == 'c')
		size = ft_print_char(ap, pre_size);
	else if (c == 's')
		size = ft_print_str(ap, pre_size);
	else if (c == 'd' || c == 'i')
		size = ft_print_int(ap, pre_size);
	else if (c == 'x')
		size = ft_print_hex_lower(ap, pre_size);
	else if (c == 'X')
		size = ft_print_hex_upper(ap, pre_size);
	else if (c == 'p')
		size = ft_print_void_ptr(ap, pre_size);
	else if (c == 'u')
		size = ft_print_unsigned_int(ap, pre_size);
	else
		size = ft_putchar_fd(c, pre_size);
	return (size);
}
