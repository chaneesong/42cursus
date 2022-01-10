/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:45 by chsong            #+#    #+#             */
/*   Updated: 2022/01/10 14:00:49 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_str(va_list ap)
{
	char	*tmp;
	tmp = va_arg(ap, char *);
	ft_putstr_fd(tmp, 1);
	return (ft_strlen(tmp));
}
