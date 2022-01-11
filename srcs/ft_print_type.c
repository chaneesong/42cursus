/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 03:22:51 by chsong            #+#    #+#             */
/*   Updated: 2022/01/12 03:25:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_type(t_data data, va_list ap)
{
	int		size;

	size = 0;
	if (data.format == 'c')
		size = ft_print_char(ap);
	else if (data.format == 's')
		size = ft_print_str(ap);
	else if (data.format == 'd')
		size = ft_print_int(ap);
	else if (data.format == 'i')
		size = ft_print_int(ap);
	else if (data.format == 'x')
		size = ft_print_hex_lower(ap);
	else if (data.format == 'X')
		size = ft_print_hex_upper(ap);
	else if (data.format == '%')
	{
		ft_putchar_fd('%', 1);
		size++;
	}
	return (size);
}
