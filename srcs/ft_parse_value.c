/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:57:13 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 12:16:19 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_parse_value(char **str, va_list ap, int size)
{
	int		size;
	char	*tmp;

	if (**str == '%')
	{
		(*str)++;
		tmp = ft_atos(*str, ap);
	}
	else
		tmp = ft_ctos(**str);
	(*str)++;
	return (tmp);
}