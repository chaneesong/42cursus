/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:51:31 by chsong            #+#    #+#             */
/*   Updated: 2022/01/12 05:00:28 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_unsigned_int(va_list ap)
{
	int		num;
	char	*tmp;

	num = va_arg(ap, unsigned int);
	tmp = ft_itoa(num);
	ft_putstr_fd(tmp, 1);
	free(tmp);
	return (ft_strlen(tmp));
}
