/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:13:14 by chsong            #+#    #+#             */
/*   Updated: 2021/11/13 18:10:45 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	if (dst <= src)
	{
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
		tmp += len - 1;
		s += len - 1;
		while (len--)
			*tmp-- = *s--;
	}
	return (dst);
}
