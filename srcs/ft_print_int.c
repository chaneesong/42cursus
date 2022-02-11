/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:45 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:49:29 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_int(va_list ap, int pre_size)
{
	char	*tmp;
	int		size;

	tmp = ft_itoa(va_arg(ap, int));
	if (!tmp)
		return (-1);
	size = ft_putstr(tmp, pre_size);
	free(tmp);
	return (size);
}
