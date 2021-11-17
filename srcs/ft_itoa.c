/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:19:11 by chsong            #+#    #+#             */
/*   Updated: 2021/11/17 13:46:24 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int	res;

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

void	ft_strrev(char *s, int len)
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

void	ft_setnum(char *s, long n)
{
	long	i;

	i = 0;
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
	char	*res;
	int		len;
	long	tmp;

	tmp = (long)n;
	len = ft_numlen(n);
	if (n < 0)
		res = (char *)malloc(sizeof(char) * (len + 2));
	else
		res = (char *)malloc(sizeof(char) * (len + 2));
	ft_setnum(res, tmp);
	ft_strrev(res, len);
	return (res);
}
