/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:57:13 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 15:43:26 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_parse_value(const char **str, va_list ap)
{
	char	*tmp;

	if (**str == '%')
	{
		(*str)++;
		tmp = ft_parse_ap(*str, ap);
	}
	else
		tmp = ft_ctos(**str);
	(*str)++;
	return (tmp);
}
