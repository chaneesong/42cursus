/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 18:57:06 by chsong            #+#    #+#             */
/*   Updated: 2021/10/20 19:40:45 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

int	ft_is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_plus_num(int num, char c)
{
	int	temp;

	num = num * 10;
	temp = c - '0';
	return (num + temp);
}

int	ft_atoi(char *str)
{
	int	negative_cnt;
	int	num;

	if (!*str)
		return (0);
	while (ft_is_space(*str))
		str++;
	negative_cnt = 0;
	while (ft_is_sign(*str))
	{
		if (*str == '-')
			negative_cnt++;
		str++;
	}
	if (!ft_is_number(*str))
		return (0);
	num = 0;
	while (ft_is_number(*str))
	{
		num = ft_plus_num(num, *str);
		str++;
	}
	if (negative_cnt % 2 == 1)
		num = -num;
	return (num);
}
