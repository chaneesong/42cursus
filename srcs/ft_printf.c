/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:19:49 by chsong            #+#    #+#             */
/*   Updated: 2022/02/09 20:25:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_is_print(int pre_size, char *str)
{
	int	size;
	int	return_size;

	size = ft_strlen(str);
	return_size = size + pre_size;
	if (return_size - pre_size != size)
		return (-1);
	return (size);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		size;
	char	*ap_str;

	size = 0;
	va_start(ap, str);
	while (str && *str)
	{
		if (*str == '%')
		{
			ap_str = ft_ap_to_str(*str, ap);
			if (!ap_str || ft_is_print(size, ap_str) == -1)
				return (-1);
			size += ft_print_str(str);
			free(str);
			str += 2;
			continue ;
		}
		ft_putchar_fd(*str, 1);
		str++;
		size++;
	}
	va_end(ap);
	return (size);
}
