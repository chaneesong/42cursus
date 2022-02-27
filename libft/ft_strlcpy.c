/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chsong <chsong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:57:13 by chsong            #+#    #+#             */
/*   Updated: 2021/11/28 14:41:42 by chsong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (dstsize == 0)
		return (src_len);
	cnt = 0;
	while (--dstsize && src_len - cnt++)
		*dest++ = *src++;
	*dest = '\0';
	return (src_len);
}
