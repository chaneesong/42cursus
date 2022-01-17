/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:32:12 by chsong            #+#    #+#             */
/*   Updated: 2022/01/18 00:14:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_str(va_list ap)
{
	char	*tmp;

	tmp = va_arg(ap, char *);
	if (tmp == 0)
	{
		ft_putstr_fd("(null)\0", 1);
		return (6);
	}
	else
		ft_putstr_fd(tmp, 1);
	return (ft_strlen(tmp));
}
