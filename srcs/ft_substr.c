/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:04:26 by chsong            #+#    #+#             */
/*   Updated: 2021/11/14 23:26:04 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *tmp;
	unsigned int i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (len + 1));
	while (len--)
	{
		tmp[i] = s[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}