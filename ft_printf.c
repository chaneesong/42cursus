/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:24:28 by chsong            #+#    #+#             */
/*   Updated: 2021/12/31 18:04:38 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	is_type(char c)
{
	if (ft_strchr("cspdiuxX%\0", c))
		return (1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	tmp;
	int		size;

	va_start(tmp, str);
	size = 0;
	while (*str)
	{
		if (*str == '%')
			size += ft_format_tag();
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(tmp);
	return (size);
}
