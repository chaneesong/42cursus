/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:05:08 by chsong            #+#    #+#             */
/*   Updated: 2022/02/07 12:15:47 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_is_type(char c)
{
	if (ft_strchr("csdixXpu%", c))
		return (1);
	return (0);
}

int	ft_valid_type(const char *str, va_list ap)
{
	int	size;

	size = 0;
	if (ft_is_type(*str))
	{
		size += ft_print_type(*str, ap);
		str++;
	}
	return (size);
}