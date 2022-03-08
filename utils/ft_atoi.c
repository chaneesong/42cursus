/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 18:57:06 by chsong            #+#    #+#             */
/*   Updated: 2022/03/08 14:14:44 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	update_sign(const char **str)
{
	const char	*sign;

	sign = *str;
	(*str)++;
	if (*sign == '+')
		return (1);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			negative;
	long long	result;

	negative = 1;
	while (*str)
	{
		if (!ft_isspace(*str))
			break ;
		str++;
	}
	if (*str == '+' || *str == '-')
		negative *= update_sign(&str);
	result = 0;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result = result * negative;
	if (*str != '\0' || result > 2147483647 || result < -2147483648)
	{
		print_error();
		exit(-1);
	}
	return (result);
}
