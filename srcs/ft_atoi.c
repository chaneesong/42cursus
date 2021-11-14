/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:57:06 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 20:06:45 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	negative;
	int	res;

	negative = 1;
	while (*str)
	{
		if (!ft_isspace(*str))
			break;
		str++;
	}
	if (*str == '-')
	{
		negative *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	res = 0;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return ((int)(res * negative));
}