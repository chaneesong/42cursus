/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:19:49 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:38:18 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		size;

	va_start(ap, str);
	size = 0;
	while (str && *str)
	{
		if (*str == '%')
		{
			str++;
			size = ft_print_type(*str, ap, size);
			str++;
		}
		else
		{
			size = ft_putchar(*str, size);
			str++;
		}
		if (size == -1)
			return (size);
	}
	va_end(ap);
	return (size);
}
