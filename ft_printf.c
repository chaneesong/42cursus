/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:24:28 by chsong            #+#    #+#             */
/*   Updated: 2021/12/16 22:09:31 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	char	is_type(char c)
{
	char	format;

	format = ft_strchr("cspdiuxX%\0", c);
	return (format);
}

static t_flags	find_flags(const char **str)
{
	t_flags	flags;
	char	format;

	ft_memset(&flags, 0, sizeof(t_flags));
	while (*str && **str)
	{
		format = is_type(**str);
		if (format)
			break ;
		// insert_flags();
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
			flags = find_flags(&str);
			// find_type(&str);
			continue ;
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(tmp);
	return (size);
}
