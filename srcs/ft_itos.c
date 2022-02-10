/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:43:30 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 15:22:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int  ft_numlen(long n)
{
    int res;

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

static void ft_strrev(char *s, int len)
{
    int     i;
    char    tmp;

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

static void ft_setnum(char *s, long n)
{
    long    i;

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

char	*ft_itos(int num)
{
	char	*str;
	int		size;

	size = ft_numlen((long)num);
	if (num < 0)
		str = (char *)malloc(sizeof(char) * (size + 2));
	else
		str = (char *)malloc(sizeof(char) * (size + 1));
	ft_setnum(str, (long)num);
	ft_strrev(str, (long)num);
	return (str);
}
