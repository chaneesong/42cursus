/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ap_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:46:01 by chsong            #+#    #+#             */
/*   Updated: 2022/02/09 20:24:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_ap_to_str(char c, va_list ap)
{
	char	*str;

	if (c == 'c')
		str = ft_ctos(va_arg(ap, int));
	else if (c == 's')
		str = ft_stos(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		str = ft_itos(va_arg(ap, int));
	else if (c == 'x' || c == 'X' || c == 'p')
		str = ft_ultos(va_arg(ap, unsigned long));
	else if (c == 'u')
		str = ft_utos(va_arg(ap, unsigned int));
	return (str);
}
