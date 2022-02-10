/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:43:30 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 12:03:02 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_numlen(int num)
{
	int	len;

	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*ft_numcpy(char *dest, int src, size_t num)
{
	
}

char	*ft_itos(int num)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (ft_numlen(num) + 1));
	return (str);
}
