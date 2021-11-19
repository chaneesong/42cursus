/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:08:19 by chsong            #+#    #+#             */
/*   Updated: 2021/11/19 19:14:37 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;
	
	if (!src && !dst)
		return (NULL);
	tmp = dst;
	s = src;
	while (n--)
		*tmp++ = *s++;
	return (dst);
}
