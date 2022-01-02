/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:24:28 by chsong            #+#    #+#             */
/*   Updated: 2022/01/01 23:46:50 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
static int	args_count(const char *str)
{
	size_t	cnt;

	cnt = 0;
	while (str && *str)
	{
		if (*str == '%')
		{
			str++;
			cnt++;
		}
		if (*str == '%')
		{
			str++;
			cnt--;
		}
		else
			str++;
	}
	return (cnt);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	ac;
	size_t	size;

	ac = args_count(str);
	va_start(ap, ac);
	size = 0;
	while (str && *str)
	{
		if (*str == '%')
			size += ft_format_tag(**str, ap);
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(tmp);
	return (size);
}
