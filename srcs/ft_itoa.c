/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:52:52 by chsong            #+#    #+#             */
/*   Updated: 2022/02/11 13:40:17 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_numlen(long long n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

static void	ft_strrev(char *s, int len)
{
	int		i;
	char	tmp;

	i = 0;
	if (s[0] == '-')
	{
		i++;
		len++;
	}
	else
		len--;
	while (i < len / 2 + 1)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
}

static void	ft_setnum(char *s, long long n)
{
	long	i;

	i = 0;
	if (n == 0)
	{
		s[i] = '0';
		i++;
	}
	if (n < 0)
	{
		s[i] = '-';
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	s[i] = '\0';
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	long long	tmp;

	tmp = (long long)n;
	len = ft_numlen(tmp);
	if (n < 0)
		res = (char *)malloc(sizeof(char) * (len + 2));
	else
		res = (char *)malloc(sizeof(char) * (len + 1));
	ft_setnum(res, tmp);
	ft_strrev(res, len);
	return (res);
}
