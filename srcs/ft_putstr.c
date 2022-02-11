/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:23:31 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:49:09 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *str, int pre_size)
{
	int	size;

	if (!str)
		return (-1);
	size = ft_check_size(pre_size, ft_strlen(str));
	if (size != -1)
		write(1, str, ft_strlen(str));
	return (size);
}
