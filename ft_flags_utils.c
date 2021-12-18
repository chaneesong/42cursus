/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 22:10:23 by chsong            #+#    #+#             */
/*   Updated: 2021/12/18 01:16:13 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
void	insert_flags(t_flags *flags, char c)
{
	if (c == '0')
		(*flags).zpadding = 1;
	else if (c == '-')
		(*flags).lshift = 1;
	else if (c == '*')
		(*flags).wildcard = 1;
	else if (c == ' ')
		(*flags).space = 1;
	else if (c == '#')
		(*flags).hash = 1;
	else if (c == '+')
		(*flags).sign = 1;
	else if (c == '.')
		(*flags).precision = 1;
	else if (ft_isdigit(c))
	{
		printf("c=%c\n", c);
		(*flags).width = (*flags).width * 10 + (int)c - 48;
	}
}
