/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:08:28 by chsong            #+#    #+#             */
/*   Updated: 2021/10/21 09:23:05 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_is_negative(char *str)
{
	int	cnt;

	while(*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\v' 
			|| *str == '\f' || *str == '\r' || *str == '\t')
			str++;
	}
	cnt = 0;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			cnt++;
		str++;
	}
	return (cnt);
}

int	ft_is_base(char c, char *base)
{
	int	cnt;

	cnt = 0;
	while (*(base + cnt))
	{
		if (*(base + cnt) == c)
			return (1);
		cnt++;
	}
	return (0);
}

int	ft_is_invalued_base(char *ptr)
{
	int	i;
	int	j;

	if (*ptr == '\0' || *(ptr + 1) == '\0')
		return (0);
	i = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) )
			return (0);
		if (ft_is_space(*(ptr + i)))
			return (0);
		j = i + 1;
		while (*(base + j))
		{
			if (*(ptr + i) == *(ptr + j))
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_btoi(char c, int s, int base_cnt)
{
	int	res;
	int	i;
	
	i = 0;
	res = c - '0';
	while (i < s)
	{
		res *= base_cnt;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_cnt;
	int	negative_cnt;
	int	sqrt_cnt;
	int	res;

	if (ft_is_invalued_base(base))
		return (0);
	negative_cnt = ft_is_negative(str);
	sqrt_cnt = 0;
	res = 0;
	while (ft_is_base(*str, base))
	{
		sqrt_cnt++;
		res += ft_btoi(*str, sqrt_cnt, base_cnt);
		str++;
	}
	if (negative_cnt % 2 == 0)
		res *= -1;
	return (res);
}
/*
int main()
{
	char arr1[] = "   ---+--+1234ab567";
	char arr2[] = "0123456789ABCDEF";
	int num = ft_atoi_base(arr1, arr2);
	printf("%d\n", num);
}*/
