/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 12:56:39 by chsong            #+#    #+#             */
/*   Updated: 2022/03/28 22:23:37 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

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
	if (*str != '\0' || result > 99999 || result < 101)
	{
		ft_putstr("pid Error\n");
		exit(1);
	}
	return (result);
}
