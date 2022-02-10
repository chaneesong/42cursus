/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:43:55 by chsong            #+#    #+#             */
/*   Updated: 2022/02/10 11:23:14 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str && *str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_stos(char *str)
{
	char	*tmp;
	size_t	index;

	tmp = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str && str[index])
		tmp[index] = str[index];
	tmp[index] = '\0';
	return (tmp);
}
