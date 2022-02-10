/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:58:45 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 20:48:48 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_int(va_list ap, int pre_size)
{
	char	*tmp;
	int		len;

	tmp = ft_itoa(va_arg(ap, int));
	ft_putstr_fd(tmp, pre_size);
	len = ft_strlen(tmp);
	free(tmp);
	return (len);
}
