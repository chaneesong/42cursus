/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:45 by chsong            #+#    #+#             */
/*   Updated: 2022/01/11 22:39:06 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_int(va_list ap)
{
	char	*tmp;
	int		len;

	tmp = ft_itoa(va_arg(ap, int));
	ft_putstr_fd(tmp, 1);
	len = ft_strlen(tmp);
	free(tmp);
	return (len);
}
