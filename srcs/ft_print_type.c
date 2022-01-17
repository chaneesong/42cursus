/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:22:51 by chsong            #+#    #+#             */
/*   Updated: 2022/01/17 23:31:27 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_type(char c, va_list ap)
{
	int		size;

	size = 0;
	if (c == 'c')
		size = ft_print_char(ap);
	else if (c == 's')
		size = ft_print_str(ap);
	else if (c == 'd')
		size = ft_print_int(ap);
	else if (c == 'i')
		size = ft_print_int(ap);
	else if (c == 'x')
		size = ft_print_hex_lower(ap);
	else if (c == 'X')
		size = ft_print_hex_upper(ap);
	else if (c == 'p')
		size = ft_print_void_ptr(ap);
	else if (c == 'u')
		size = ft_print_unsigned_int(ap);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		size++;
	}
	return (size);
}
