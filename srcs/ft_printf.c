/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:19:49 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 12:06:56 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		size;
	char	*v_str;

	size = 0;
	va_start(ap, str);
	while (str && *str)
	{
		v_str = ft_vtos(&str, ap, size);
		size = ft_putstr(v_str, size);
		if (size == -1)
			return (size);
	}
	va_end(ap);
	return (size);
}
