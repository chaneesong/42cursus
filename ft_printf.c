/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:24:28 by chsong            #+#    #+#             */
/*   Updated: 2021/12/16 21:41:20 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	is_type(char c)
{
	int		check;

	check = 0;
	if (ft_strchr("cspdiuxX%\0", c))
		check = 1;

	return (check);
}

static t_flags	find_format(const char **str)
{
	t_flags	flags;

	ft_memset(&flags, 0, sizeof(t_flags));
	while (*str && **str)
	{
		if (is_type(**str))
			break ;
		(*str)++;
	}
	return (flags);
}

// static int	find_type(char **str)
// {
// }

int	ft_printf(const char *str, ...)
{
	va_list	tmp;
	t_flags	flags;
	int		size;

	va_start(tmp, str);
	size = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			flags = find_format(&str);
			// find_type(&str);
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(tmp);
	return (size);
}
