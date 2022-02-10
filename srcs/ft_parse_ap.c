/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_ap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:46:01 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 12:16:09 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_parse_ap(char *str, va_list ap)
{
	char	*tmp;

	if (*str == 'c')
		tmp = ft_ctos(va_arg(ap, int));
	else if (*str == 's')
		tmp = ft_stos(va_arg(ap, char *));
	else if (*str == 'd' || *str == 'i')
		tmp = ft_itos(va_arg(ap, int));
	else if (*str == 'x' || *str == 'X' || *str == 'p')
		tmp = ft_ultos(va_arg(ap, unsigned long));
	else if (*str == 'u')
		tmp = ft_utos(va_arg(ap, unsigned int));
	else
		tmp = ctos(*(str + 1));
	return (tmp);
}
