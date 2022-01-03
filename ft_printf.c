/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:19:49 by chsong            #+#    #+#             */
/*   Updated: 2022/01/03 21:48:02 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	size_t	size;
	char	*target;

	va_start(ap, str);
	size = 0;
	while (str && *str)
	{
		if (*str == '%')
		{
			str++;
			ft_copy_target(&str);
			size += ft_processing(target, ap);
			continue ;
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(ap);
	return (size);
}
