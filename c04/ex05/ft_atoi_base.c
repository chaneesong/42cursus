/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 00:10:03 by chsong            #+#    #+#             */
/*   Updated: 2021/10/22 15:50:59 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_check_possible_base(char *base)
{
	int	offset;
	int	cur;

	if (*(base) == '\0' || *(base + 1) == '\0')
		return (0);
	cur = 0;
	while (*(base + cur))
	{
		offset = cur + 1;
		if (*(base + cur) == '+' || *(base + cur) == '-'
			|| ft_is_space(*(base + cur)))
			return (0);
		while (*(base + offset))
		{
			if (*(base + cur) == *(base + offset))
				return (0);
			offset++;
		}
		cur++;
	}
	return (cur);
}

int	ft_char_in_base(char c, char *base)
{
	int	cnt;

	cnt = 0;
	while (*(base + cnt))
	{
		if (c == *(base + cnt))
			return (cnt + 1);
		cnt++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_cnt;
	int	negative;
	int	cur;
	int	result;

	base_cnt = ft_check_possible_base(base);
	if (!base_cnt)
		return (0);
	while (ft_is_space(*str))
		str++;
	negative = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	cur = 0;
	result = 0;
	while (*(str + cur) && ft_char_in_base(*(str + cur), base))
	{
		result = (result * base_cnt) + (ft_char_in_base(*(str + cur), base));
		cur++;
	}
	return (result * negative);
}
