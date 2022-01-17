/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 02:51:31 by chsong            #+#    #+#             */
/*   Updated: 2022/01/17 23:33:49 by chsong           ###   ########.fr       */
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
	num = ft_strlen(tmp);
	free(tmp);
	return (num);
}
