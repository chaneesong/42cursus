/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:24:28 by chsong            #+#    #+#             */
/*   Updated: 2021/12/18 01:15:46 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
static	char	is_type(char c)
{
	int	format;

	if (ft_strchr("cspdiuxX%\0", c))
		return (1);
	return (0);
}

static t_flags	find_flags(const char **str)
{
	t_flags	flags;

	ft_memset(&flags, 0, sizeof(t_flags));
	while (*str && **str)
	{
		if (is_type(**str))
			break ;
		insert_flags(&flags, **str);
		(*str)++;
	}
	// printf("%d\n", flags.zpadding);
	// printf("%d\n", flags.sign);
	// printf("%d\n", flags.lshift);
	// printf("%d\n", flags.space);
	// printf("%d\n", flags.hash);
	// printf("%d\n", flags.width);
	// printf("%d\n", flags.wildcard);
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
			// find_type(*str)
			continue ;
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(tmp);
	return (size);
}
