/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:32:12 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 21:19:34 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_str(va_list ap, int pre_size)
{
	char	*tmp;
	int		size;

	tmp = va_arg(ap, char *);
	size = 0;
	if (tmp == 0)
	{
		size = ft_putstr_fd("(null)", pre_size);
		return (size);
	}
	else
		size = ft_putstr_fd(tmp, pre_size);
	return (size);
}
