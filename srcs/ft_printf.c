/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:19:49 by chsong            #+#    #+#             */
/*   Updated: 2022/02/07 12:14:47 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	size;

	va_start(ap, str);
	size = 0;
	while (str && *str)
	{
		if (*str == '%')
		{
			str++;
			size += ft_valid_type(str, ap);
			continue ;
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(ap);
	return (size);
}
