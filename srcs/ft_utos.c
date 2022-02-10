/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:43:19 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 16:07:55 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int  ft_numlen(unsigned int n)
{
    int res;

    if (n == 0)
        return (1);
    res = 0;
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
    while (i < len / 2 + 1)
    {
        tmp = s[i];
        s[i] = s[len - i];
        s[len - i] = tmp;
        i++;
    }
}

static void ft_setnum(char *s, unsigned int n)
{
    long    i;

    i = 0;
    if (n == 0)
    {
        s[i] = '0';
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

char	*ft_utos(unsigned int num)
{
	char	*str;
	int		size;

	size = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (size + 1));
	ft_setnum(str, num);
	ft_strrev(str, num);
	return (str);
}
